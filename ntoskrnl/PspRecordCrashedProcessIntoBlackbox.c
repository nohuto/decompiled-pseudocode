/*
 * XREFs of PspRecordCrashedProcessIntoBlackbox @ 0x1409AC84C
 * Callers:
 *     PsSetProcessFaultInformation @ 0x14067FC50 (PsSetProcessFaultInformation.c)
 * Callees:
 *     ZwPowerInformation @ 0x140412EF0 (ZwPowerInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PspRecordCrashedProcessIntoBlackbox(__int64 a1)
{
  unsigned __int16 *v1; // rbx
  int v2; // edi
  int v3; // eax
  _DWORD *Pool2; // rax
  void *v5; // rsi
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
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v2 + 8), 1648522064LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 1;
    Pool2[1] = v2 + 8;
    if ( v2 )
      memmove(Pool2 + 2, *((const void **)v1 + 1), *v1);
    v7 = 13;
    InputBuffer[0] = v5;
    InputBuffer[1] = (unsigned int)(v2 + 8);
    ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v5, 0x62427350u);
  }
}
