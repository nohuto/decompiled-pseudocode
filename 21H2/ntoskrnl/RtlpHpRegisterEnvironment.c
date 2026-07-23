/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x14037B678
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x140389A0C (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14037B760 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14038CF60 (RtlpHpVaMgrCtxAllocatorDereference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1)
{
  __int128 v1; // xmm0
  unsigned int v2; // ebx
  char *HeapManager; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v11[3]; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+4Ch] [rbp-14h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = 0;
  v12 = 0;
  v9 = v1;
  if ( BYTE3(v1) )
    v11[0] = BYTE3(v1) - 1;
  else
    v11[0] = -1;
  v11[1] = BYTE1(v1);
  v11[2] = BYTE2(v1);
  if ( (v1 & 8) != 0 )
    v12 = 1;
  v13 = *((_QWORD *)&v1 + 1);
  v10 = v1;
  HeapManager = (char *)RtlpHpEnvGetHeapManager(&v10);
  if ( v5 )
  {
    v6 = 0x200000LL;
    if ( BYTE1(v1) == 3 )
      v6 = 0x40000000LL;
    v7 = RtlpHpVaMgrCtxAllocatorReference(HeapManager + 88, v11, v6);
    if ( v7 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v9) = v7 + 1;
      *a1 = v9;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(HeapManager + 88, v11);
  }
  return v2;
}
