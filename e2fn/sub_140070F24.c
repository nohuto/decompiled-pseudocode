__int64 __fastcall sub_140070F24(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v8; // rbx

  sub_140070808((_QWORD *)a1, a2, a3);
  *(_QWORD *)(a1 + 200) = &off_1400D4540;
  *(_QWORD *)(a1 + 208) = 0xA5A5A5A5A5000003uLL;
  *(_DWORD *)(a1 + 216) = a5;
  *(_QWORD *)(a1 + 232) = a3;
  *(_QWORD *)a1 = &off_1400D90F8;
  *(_QWORD *)(a1 + 56) = off_1400D9120;
  *(_QWORD *)(a1 + 200) = off_1400D9150;
  *(_QWORD *)(a1 + 224) = 0xA5A5A5A5A5000008uLL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  sub_1400A27D4(a1 + 328, a3 + 328);
  v8 = *(_QWORD *)(a1 + 328);
  *(_BYTE *)(a1 + 344) = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  sub_140071BD4(*(_QWORD *)(a1 + 232), a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  return a1;
}
