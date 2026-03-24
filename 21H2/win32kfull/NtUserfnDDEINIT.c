/*
 * XREFs of NtUserfnDDEINIT @ 0x1C0204B90
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F5E80 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F5F50 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbx
  __int64 v11; // rax
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 Prop; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  TOKEN_TYPE v20; // eax
  void *v21; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rcx
  _QWORD v25[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-20h]

  v26 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v25[2] = 0LL;
  v11 = ValidateHwnd(a3);
  v12 = (unsigned __int64 *)v11;
  if ( v11 )
  {
    v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v25;
    v25[1] = v11;
    HMLockObject(v11);
    Prop = GetProp((__int64)v12, (unsigned __int16)atomDDEImp, 1LL);
    if ( !Prop )
    {
      v16 = v12[5];
      if ( *(char *)(v16 + 19) < 0 || *(char *)(v16 + 20) < 0 )
      {
LABEL_15:
        v18 = 87LL;
        goto LABEL_16;
      }
      v17 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v17;
      if ( !v17 )
      {
LABEL_6:
        v18 = 8LL;
LABEL_16:
        UserSetLastError(v18, v13, v15);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v17 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v17 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool((void *)Prop);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp((__int64)v12, v19, Prop, 1u) )
      {
        v20 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v21 = *(void **)(Prop + 32);
        if ( v20 == TokenPrimary || v21 )
          ObfDereferenceObject(v21);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)&v26) == 1 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             a4,
             a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v26;
      DDEImpDecRefInitWorker(*v12);
LABEL_17:
      ThreadUnlock1(v23);
      return v7;
    }
    goto LABEL_15;
  }
  return v7;
}
