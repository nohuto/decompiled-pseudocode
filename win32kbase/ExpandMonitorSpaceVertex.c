__int64 __fastcall ExpandMonitorSpaceVertex(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  INT v3; // rbx^4
  INT v4; // edi
  INT v5; // esi
  __int64 v7; // [rsp+48h] [rbp+20h]

  v3 = HIDWORD(a3);
  v4 = a2;
  v5 = a1;
  LODWORD(v7) = EngMulDiv(a3, a1, a2);
  HIDWORD(v7) = EngMulDiv(v3, v5, v4);
  return v7;
}
