__int64 __fastcall AcpiIrqLibEjectArbiterInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _OWORD *v4; // rax
  __int128 v5; // [rsp+0h] [rbp-30h]
  __int128 v6; // [rsp+10h] [rbp-20h]
  __int128 v7; // [rsp+20h] [rbp-10h]

  v2 = *(_QWORD *)(a2 + 184);
  DWORD1(v5) = 0;
  HIDWORD(v7) = 0;
  if ( *(_WORD *)(v2 + 16) < 0x30u )
    return 3221225485LL;
  v4 = *(_OWORD **)(v2 + 24);
  *((_QWORD *)&v5 + 1) = &IrqLibArbiterInstance;
  *(_QWORD *)&v6 = PciConfigPinToLine;
  *((_QWORD *)&v6 + 1) = PciConfigPinToLine;
  LODWORD(v5) = 65584;
  *(_QWORD *)&v7 = ArbArbiterHandler;
  DWORD2(v7) = 0;
  *v4 = v5;
  v4[1] = v6;
  v4[2] = v7;
  return 0LL;
}
