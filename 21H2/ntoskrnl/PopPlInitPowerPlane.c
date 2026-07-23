/*
 * XREFs of PopPlInitPowerPlane @ 0x1408F9A54
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x14057EC64 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PopPlInitDevices @ 0x1408F98D8 (PopPlInitDevices.c)
 *     PopPlInitWString @ 0x1408F9B5C (PopPlInitWString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopPlInitPowerPlane(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  int inited; // edi
  PVOID PoolWithTag; // rax
  void *v11; // rcx
  __int64 result; // rax

  v4 = 0LL;
  if ( a1 + 52 <= a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x6C506F50u);
    v4 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      inited = PopPlInitWString((PUNICODE_STRING)v4);
      if ( inited >= 0 )
      {
        *(_QWORD *)(v4 + 16) = 0LL;
        inited = PopPlInitDevices(
                   v4,
                   a1 + 8,
                   *(unsigned int *)(a1 + 4),
                   a2,
                   a3,
                   (unsigned __int64 *)(v4 + 48),
                   (_QWORD *)(v4 + 56));
        if ( inited >= 0 )
          goto LABEL_11;
        v11 = *(void **)(v4 + 8);
        if ( v11 )
          ExFreePoolWithTag(v11, 0x6C506F50u);
        *(_OWORD *)v4 = 0LL;
      }
      ExFreePoolWithTag((PVOID)v4, 0x6C506F50u);
      v4 = 0LL;
      goto LABEL_11;
    }
    inited = -1073741670;
  }
  else
  {
    inited = -1073741306;
  }
LABEL_11:
  result = (unsigned int)inited;
  *a4 = v4;
  return result;
}
