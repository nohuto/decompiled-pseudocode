void __fastcall MiLogCreateImageFileMapFailure(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r11
  int v5; // r9d
  __int64 v6; // r10
  int v7; // [rsp+40h] [rbp-49h] BYREF
  int v8; // [rsp+44h] [rbp-45h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v11[16]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  _DWORD v16[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  int *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  __int64 *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL) )
    {
      tlgCreate1Sz_char((__int64)v11, "SectionAlignmentIssue");
      v14 = 0;
      v16[1] = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v12 = v16;
      v15 = *(_QWORD *)(v4 + 96);
      v16[0] = *(unsigned __int16 *)(v4 + 88);
      v17 = &v7;
      v20 = &v8;
      v18 = 4;
      v21 = 4;
      v23 = &v9;
      v8 = v5;
      v24 = 8;
      v13 = 2;
      v7 = a3;
      v9 = 0x1000000LL;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&byte_1400381E0, 0LL, 1u, 0, 0, 8u, &v10);
    }
  }
}
