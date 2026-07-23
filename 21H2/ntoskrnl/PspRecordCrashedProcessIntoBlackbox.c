/*
 * XREFs of PspRecordCrashedProcessIntoBlackbox @ 0x140908638
 * Callers:
 *     PsSetProcessFaultInformation @ 0x140772EF0 (PsSetProcessFaultInformation.c)
 * Callees:
 *     ZwPowerInformation @ 0x1403FB160 (ZwPowerInformation.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PspRecordCrashedProcessIntoBlackbox(__int64 a1)
{
  unsigned __int16 *v1; // rbx
  int v2; // edi
  int v3; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rsi
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v1 = *(unsigned __int16 **)(a1 + 1472);
  InputBuffer[2] = 0LL;
  v2 = 0;
  v8 = 0;
  if ( v1 )
  {
    if ( *((_QWORD *)v1 + 1) )
    {
      v3 = *v1;
      if ( (_WORD)v3 )
        v2 = v3 + 2;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v2 + 8), 0x62427350u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(v2 + 8));
    *v5 = 1;
    v5[1] = v2 + 8;
    if ( v2 )
      memmove(v5 + 2, *((const void **)v1 + 1), *v1);
    v7 = 13;
    InputBuffer[0] = v5;
    InputBuffer[1] = (unsigned int)(v2 + 8);
    ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v5, 0x62427350u);
  }
}
