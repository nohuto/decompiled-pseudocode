/*
 * XREFs of KsepDbReadKFlag @ 0x140800CD0
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407A2798 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 */

__int64 __fastcall KsepDbReadKFlag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 StringTagPtr; // rax
  unsigned int v10; // eax

  v4 = a2;
  v6 = -1073741823;
  if ( (_DWORD)a2 )
  {
    FirstTag = SdbFindFirstTag(a1, a2, 24577LL);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v8);
      if ( StringTagPtr )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v10 = SdbFindFirstTag(a1, v4, 20485LL);
        if ( v10 )
        {
          *(_DWORD *)(a3 + 8) = 11;
          *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v10, 0LL);
          v6 = 0;
          *(_QWORD *)(a3 + 16) = a3 + 32;
          *(_DWORD *)(a3 + 12) = 8;
        }
      }
    }
  }
  return v6;
}
