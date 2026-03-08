/*
 * XREFs of PopPepClearDripsDeviceVetoMask @ 0x14059C634
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140586DE0 (PopFxClearDeviceConstraints.c)
 * Callees:
 *     PopPepUpdateIdleStateRefCount @ 0x1402F295C (PopPepUpdateIdleStateRefCount.c)
 */

__int64 __fastcall PopPepClearDripsDeviceVetoMask(__int64 a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  __int64 v4; // rcx
  unsigned int i; // esi
  __int64 v6; // rbp
  unsigned int j; // edx
  __int64 v8; // rax

  v2 = -1073741823;
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    PopPepUpdateIdleStateRefCount(*(_DWORD *)(a1 + 144), 0, 0, (volatile signed __int32 *)(a1 + 184));
    v3 = (_DWORD *)(a1 + 156);
    v4 = 3LL;
    v2 = 0;
    do
    {
      *(v3 - 3) = 0;
      *v3++ = 0;
      --v4;
    }
    while ( v4 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v6 = 208LL * i;
      PopPepUpdateIdleStateRefCount(
        *(_DWORD *)(*(_QWORD *)(a1 + v6 + 392) + 16LL),
        0,
        0,
        (volatile signed __int32 *)(v6 + a1 + 384));
      for ( j = 0; j < *(_DWORD *)(a1 + v6 + 380); *(_DWORD *)(*(_QWORD *)(a1 + v6 + 392) + 24 * v8 + 16) = 0 )
        v8 = j++;
    }
  }
  return v2;
}
