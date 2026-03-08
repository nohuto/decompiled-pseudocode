/*
 * XREFs of PushAccFieldObj @ 0x1C00525E8
 * Callers:
 *     WriteFieldObj @ 0x1C0006080 (WriteFieldObj.c)
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 *     AccessFieldData @ 0x1C0051AD8 (AccessFieldData.c)
 *     PreserveWriteObj @ 0x1C0052540 (PreserveWriteObj.c)
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     ReadFieldObj @ 0x1C0052CB0 (ReadFieldObj.c)
 *     WriteFieldLoop @ 0x1C0053200 (WriteFieldLoop.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 */

__int64 __fastcall PushAccFieldObj(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  int v8; // r8d
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v8 = 128;
  if ( *(_DWORD *)(a4 + 20) )
    v8 = *(_DWORD *)(a4 + 28) + 128;
  v9 = PushFrame(a1, 1330004801, v8, a2, (__int64)&v15);
  if ( !v9 )
  {
    v10 = v15;
    v11 = a5;
    v12 = a5 + a6;
    *(_QWORD *)(v15 + 32) = a3;
    *(_QWORD *)(v10 + 40) = v11;
    *(_QWORD *)(v10 + 48) = v12;
    v13 = 1 << ((*(_BYTE *)(a4 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(a4 + 12) & 0xFu) - 1 > 3 )
      v13 = 1;
    *(_DWORD *)(v10 + 56) = v13;
    *(_DWORD *)(v10 + 60) = (8 * v13 + *(_DWORD *)(a4 + 8) + *(_DWORD *)(a4 + 4) - 1) / (unsigned int)(8 * v13);
    *(_QWORD *)(v10 + 64) = ((1LL << (8 * *(_BYTE *)(v10 + 56))) & -(__int64)((unsigned int)(8 * *(_DWORD *)(v10 + 56)) < 0x40))
                          - 1;
    *(_DWORD *)(v10 + 72) = 8 * *(_DWORD *)(v10 + 56) - *(_DWORD *)(a4 + 4);
    *(_DWORD *)(v10 + 76) = *(_DWORD *)(a4 + 4);
    memmove((void *)(v10 + 96), (const void *)a4, (unsigned int)(*(_DWORD *)(a4 + 28) + 32));
  }
  return v9;
}
