/*
 * XREFs of Register_D0Entry @ 0x1C0014A04
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_D0Entry(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v4; // rbx
  int Ulong; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax

  v1 = (__int64 *)(a1 + 24);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL) & 2) != 0 )
  {
    v4 = *v1;
    Ulong = XilRegister_ReadUlong(a1, *v1 + 32912);
    XilRegister_WriteUlong(a1, v4 + 32912, Ulong & 0xFFFFEFFF);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL) & 1) != 0 )
  {
    v6 = *v1;
    v7 = XilRegister_ReadUlong(a1, *v1 + 32988);
    XilRegister_WriteUlong(a1, v6 + 32988, v7 & 0xFFFFFF7D);
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 336LL), 0x2Eu) )
  {
    v8 = *v1;
    v9 = XilRegister_ReadUlong(a1, *v1 + 32916);
    XilRegister_WriteUlong(a1, v8 + 32916, v9 | 0x200000u);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL) & 4) != 0 )
  {
    v10 = *v1;
    v11 = XilRegister_ReadUlong(a1, *v1 + 16500);
    XilRegister_WriteUlong(a1, v10 + 16500, v11 | 0x8000u);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL) & 8) != 0 )
  {
    v12 = *v1;
    v13 = XilRegister_ReadUlong(a1, *v1 + 16500);
    XilRegister_WriteUlong(a1, v12 + 16500, v13 & 0xFF7FFFFF);
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 336LL), 0x38u) )
  {
    v14 = *v1 + 32932;
    v15 = XilRegister_ReadUlong(a1, v14);
    XilRegister_WriteUlong(a1, v14, v15 | 0x10000000u);
    KeStallExecutionProcessor(0x32u);
    v16 = XilRegister_ReadUlong(a1, v14);
    XilRegister_WriteUlong(a1, v14, v16 & 0xEFFFFFFF);
  }
  return 0LL;
}
