/*
 * XREFs of NtUserfnDDEINIT @ 0x1C01E0470
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CBD60 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01CBDF4 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rbx
  unsigned int v9; // r12d
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r9
  _DWORD *Prop; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-40h] BYREF
  __int64 v27; // [rsp+58h] [rbp-30h]

  v26 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v25[2] = 0LL;
  v9 = a2;
  v11 = PtiCurrentShared(a1, a2, a3, a4);
  v12 = ValidateHwnd(a3);
  v13 = v12;
  if ( v12 )
  {
    v25[0] = *((_QWORD *)v11 + 52);
    *((_QWORD *)v11 + 52) = v25;
    v25[1] = v12;
    HMLockObject(v12);
    Prop = (_DWORD *)GetProp(v13, (unsigned __int16)atomDDEImp, 1LL, v14);
    if ( !Prop )
    {
      v16 = *(_QWORD *)(v13 + 40);
      if ( *(char *)(v16 + 19) < 0 || *(char *)(v16 + 20) < 0 )
      {
LABEL_13:
        v18 = 87;
        goto LABEL_14;
      }
      v17 = Win32AllocPoolWithQuotaZInit(96LL, 1147433813LL);
      Prop = (_DWORD *)v17;
      if ( !v17 )
      {
LABEL_6:
        v18 = 8;
LABEL_14:
        UserSetLastError(v18);
        goto LABEL_15;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v17 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v17 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      Prop[22] = 0;
      if ( !(unsigned int)InternalSetProp(v13, v19, (__int64)Prop, 1u) )
      {
        SeDeleteClientSecurity(Prop + 4);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v13, (struct tagDDEIMP *)Prop, (struct _TL *)&v26) == 1 )
    {
      v6 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))&WPP_MAIN_CB.SectorSize
            + ((a6 + 6) & 0x1F)))(
             a1,
             v9,
             a3,
             a4,
             a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v26;
      DDEImpDecRefInitWorker(*(HWND *)v13);
LABEL_15:
      ThreadUnlock1(v22, v21, v23);
      return v6;
    }
    goto LABEL_13;
  }
  return v6;
}
