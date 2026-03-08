/*
 * XREFs of MiSectionInitialization @ 0x140B6D268
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObject @ 0x140709D30 (ObCreateObject.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 MiSectionInitialization()
{
  _QWORD *Pool; // rbx
  UNICODE_STRING v2; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v4[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v5; // [rsp+78h] [rbp-88h]
  _QWORD *v6; // [rsp+80h] [rbp-80h]
  int v7; // [rsp+88h] [rbp-78h]
  int v8; // [rsp+8Ch] [rbp-74h]
  __int128 v9; // [rsp+90h] [rbp-70h]
  _QWORD v10[18]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp+48h] BYREF

  dword_140C69360 = -1;
  qword_140C651C8 = 0LL;
  v8 = 0;
  Handle = 0LL;
  v4[1] = 0;
  v2.Buffer = L"Section";
  v3[1] = L"\\Device\\PhysicalMemory";
  *(_QWORD *)&v2.Length = 1048590LL;
  v3[0] = 3014700LL;
  memset(v10, 0, 0x78uLL);
  BYTE2(v10[0]) |= 4u;
  v10[7] = MiSectionOpen;
  LOWORD(v10[0]) = 120;
  v10[8] = MiSectionClose;
  LODWORD(v10[5]) = 64;
  v10[9] = MiSectionDelete;
  LODWORD(v10[1]) = 256;
  HIDWORD(v10[4]) = 1;
  HIDWORD(v10[3]) = 983071;
  *(_OWORD *)((char *)&v10[1] + 4) = MiSectionMapping;
  HIDWORD(v10[0]) = 128;
  if ( (int)ObCreateObjectType(&v2, (__int64)v10, 0LL, (__int64)&MmSectionObjectType) >= 0 )
  {
    Pool = MiAllocatePool(256, 0x48uLL, 0x67536D4Du);
    if ( Pool )
    {
      memset(&qword_140C651F0, 0, 0x118uLL);
      Pool[5] = 0LL;
      dword_140C652C0 |= 0x400u;
      v5 = 0LL;
      v6 = v3;
      qword_140C651F0 = (__int64)&qword_140C65288;
      qword_140C65288 = (__int64)Pool;
      qword_140C652A0 = 1LL;
      *Pool = &qword_140C65288;
      v4[0] = 48;
      v7 = 65552;
      v9 = 0LL;
      if ( (int)ObCreateObject(0, (int)MmSectionObjectType, (int)v4, 0) < 0 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
      else
      {
        MEMORY[0x28] = &qword_140C65288;
        MEMORY[0x30] = (1LL << dword_140C65760) - 1;
        MEMORY[0x38] = 0;
        MEMORY[0x3C] = MEMORY[0x3C] & 0xFFFFF000 | 0x40;
        if ( ObInsertObject(0LL, 0LL, 4u, 0, 0LL, &Handle) >= 0 )
        {
          ObCloseHandle(Handle, 0);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
