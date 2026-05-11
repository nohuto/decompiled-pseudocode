/*
 * XREFs of USBParseGetMIDIJackStringFromDeviceID @ 0x1C00303F4
 * Callers:
 *     USBParseMIDIInJack @ 0x1C0030530 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0030630 (USBParseMIDIOutJack.c)
 * Callees:
 *     memmove @ 0x1C0013540 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C002C98C (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBParseGetMIDIJackStringFromDeviceID(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // eax
  int v7; // edi
  void *v8; // rdi
  PVOID v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  PVOID PoolWithTag; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  v6 = *(_DWORD *)(v3 + 32);
  if ( v6 <= 0xFF )
  {
    v8 = *(void **)(a1 + 8);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 12, 0x41627845u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
      v7 = USBHwAllocateAndBag(&PoolWithTag, v8);
    else
      v7 = -1073741670;
    if ( v7 >= 0 )
    {
      memmove(v9, *(const void **)(v3 + 24), *(unsigned int *)(v3 + 32));
      v10 = (unsigned int)(((unsigned __int64)*(unsigned int *)(v3 + 32) - 2) >> 1);
      v11 = (unsigned int)(v10 + 1);
      *((_WORD *)v9 + v10) = 32;
      v12 = (unsigned int)(v10 + 2);
      *((_WORD *)v9 + v11) = 91;
      v13 = (unsigned int)(v12 + 1);
      if ( a2 <= 0xA )
      {
        *((_WORD *)v9 + v12) = a2 + 48;
      }
      else
      {
        *((_WORD *)v9 + (unsigned int)v12) = a2 / 0xA + 48;
        *((_WORD *)v9 + v13) = a2 % 0xA + 48;
        v13 = (unsigned int)(v12 + 2);
      }
      *a3 = v9;
      *((_WORD *)v9 + v13) = 93;
      *((_WORD *)v9 + (unsigned int)(v13 + 1)) = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)v7;
}
