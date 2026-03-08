/*
 * XREFs of CHidInput_Destroy @ 0x1C0095310
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1C0031EDC (--9-$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0095370 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

char __fastcall CHidInput_Destroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  CHidInput *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  LOBYTE(v4) = SGDHIDgpHidInput<CHidInput *>::operator!=(a1, &v14, a3, a4);
  if ( (_BYTE)v4 )
  {
    v10 = *(CHidInput **)(SGDGetUserSessionState(v6, v5, v7, v8) + 16840);
    if ( v10 )
      CHidInput::`scalar deleting destructor'(v10, 1u);
    v4 = SGDGetUserSessionState(v10, v9, v11, v12);
    *(_QWORD *)(v4 + 16840) = 0LL;
  }
  return v4;
}
