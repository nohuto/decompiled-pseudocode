/*
 * XREFs of NtUserfnDDEINIT @ 0x1C01E1520
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     InternalSetProp @ 0x1C01011E0 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CCE50 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01CCEE4 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rbx
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  _DWORD *Prop; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD v24[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]

  v25 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v24[2] = 0LL;
  v11 = PtiCurrentShared(a1);
  v12 = ValidateHwnd(a3);
  v13 = v12;
  if ( v12 )
  {
    v24[0] = *((_QWORD *)v11 + 52);
    *((_QWORD *)v11 + 52) = v24;
    v24[1] = v12;
    HMLockObject(v12);
    Prop = (_DWORD *)GetProp(v13, (unsigned __int16)atomDDEImp, 1u);
    if ( !Prop )
    {
      v15 = *(_QWORD *)(v13 + 40);
      if ( *(char *)(v15 + 19) < 0 || *(char *)(v15 + 20) < 0 )
      {
LABEL_13:
        v17 = 87;
        goto LABEL_14;
      }
      v16 = Win32AllocPoolWithQuotaZInit(96LL, 1147433813LL);
      Prop = (_DWORD *)v16;
      if ( !v16 )
      {
LABEL_6:
        v17 = 8;
LABEL_14:
        UserSetLastError(v17);
        goto LABEL_15;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v16 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v16 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v18 = (unsigned __int16)atomDDEImp;
      Prop[22] = 0;
      if ( !(unsigned int)InternalSetProp(v13, v18, (__int64)Prop, 1u) )
      {
        SeDeleteClientSecurity(Prop + 4);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v13, (struct tagDDEIMP *)Prop, (struct _TL *)&v25) == 1 )
    {
      v6 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             a4,
             a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v25;
      DDEImpDecRefInitWorker(*(HWND *)v13);
LABEL_15:
      ThreadUnlock1(v21, v20, v22);
      return v6;
    }
    goto LABEL_13;
  }
  return v6;
}
