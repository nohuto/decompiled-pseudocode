/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1C0063EA0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C005E0B0 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     DrvIsUniformSpaceMapping @ 0x1C00628A0 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rax
  ULONG64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // r14d
  __int128 *v16; // rax
  __int128 v17; // [rsp+38h] [rbp-20h]

  v5 = a1;
  v17 = 0LL;
  v6 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, (__int64)a2, a3, a4);
  v7 = HMValidateSharedHandle(v5);
  if ( v7 )
  {
    v12 = *(_QWORD *)(v7 + 88);
    if ( v12 )
    {
      v13 = *((_QWORD *)gpDispInfo + 2);
      v14 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v13) )
      {
        v9 = *(unsigned int *)(v13 + 20);
        if ( (_DWORD)v9 )
        {
          v16 = (__int128 *)(v13 + 76);
          v8 = (unsigned int)v9;
          do
          {
            if ( *(_QWORD *)((char *)v16 - 36) == v12 )
            {
              v17 = *v16;
              v14 = 1;
            }
            v16 = (__int128 *)((char *)v16 + 56);
            --v8;
          }
          while ( v8 );
        }
      }
      if ( v14 )
      {
        v6 = 1;
        v9 = MmUserProbeAddress;
        v8 = (ULONG64)a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v8 = MmUserProbeAddress;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + 15) = *(_BYTE *)(v8 + 15);
        *a2 = v17;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
