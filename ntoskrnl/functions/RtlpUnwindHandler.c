__int64 __fastcall RtlpUnwindHandler(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a4 = *(_QWORD *)v4;
  *(_QWORD *)(a4 + 8) = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(a4 + 24) = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(a4 + 40) = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(a4 + 48) = *(_QWORD *)(v4 + 48);
  *(_QWORD *)(a4 + 56) = *(_QWORD *)(v4 + 56);
  *(_QWORD *)(a4 + 64) = *(_QWORD *)(v4 + 64);
  *(_DWORD *)(a4 + 72) = *(_DWORD *)(v4 + 72);
  return 3LL;
}
