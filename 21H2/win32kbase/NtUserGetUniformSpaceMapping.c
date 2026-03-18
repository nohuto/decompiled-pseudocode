/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1C00B1C60
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     DrvIsUniformSpaceMapping @ 0x1C00B1D90 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(unsigned __int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  ULONG64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // r14d
  __int128 *v15; // rax
  __int128 v16; // [rsp+38h] [rbp-20h]

  v16 = 0LL;
  v4 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v6 = HMValidateSharedHandle(a1, v5);
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 88);
    if ( v11 )
    {
      v12 = *((_QWORD *)gpDispInfo + 2);
      v13 = 0;
      if ( (unsigned int)DrvIsUniformSpaceMapping(v12) )
      {
        v8 = *(unsigned int *)(v12 + 20);
        if ( (_DWORD)v8 )
        {
          v15 = (__int128 *)(v12 + 76);
          v7 = (unsigned int)v8;
          do
          {
            if ( *(_QWORD *)((char *)v15 - 36) == v11 )
            {
              v16 = *v15;
              v13 = 1;
            }
            v15 = (__int128 *)((char *)v15 + 56);
            --v7;
          }
          while ( v7 );
        }
      }
      if ( v13 )
      {
        v4 = 1;
        v8 = MmUserProbeAddress;
        v7 = (ULONG64)a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v7 = MmUserProbeAddress;
        *(_BYTE *)v7 = *(_BYTE *)v7;
        *(_BYTE *)(v7 + 15) = *(_BYTE *)(v7 + 15);
        *a2 = v16;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
