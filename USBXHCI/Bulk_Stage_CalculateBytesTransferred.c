/*
 * XREFs of Bulk_Stage_CalculateBytesTransferred @ 0x1C000DF50
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000DAC4 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Bulk_Stage_ProcessSegment @ 0x1C000E054 (Bulk_Stage_ProcessSegment.c)
 */

__int64 __fastcall Bulk_Stage_CalculateBytesTransferred(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  int v6; // r9d
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v9 = 0;
  v3 = (_QWORD *)(a2 + 24);
  v4 = *(_QWORD **)(a2 + 24);
  v6 = *(_DWORD *)(a2 + 104);
  while ( v3 != v4 )
  {
    if ( (unsigned __int8)Bulk_Stage_ProcessSegment(a1, a3, (_DWORD)v4, v6, (__int64)&v9) )
      return v9;
    v4 = (_QWORD *)*v4;
    v6 = 0;
  }
  Bulk_Stage_ProcessSegment(a1, a3, *(_QWORD *)(a2 + 112), v6, (__int64)&v9);
  return v9;
}
