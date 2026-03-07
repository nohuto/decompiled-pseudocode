__int64 __fastcall WheapGetTimestamp(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v4; // r8d
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  RtlpTimeToTimeFields(&v7, &v6, a3);
  v4 = (__int16)v6;
  *a1 = BYTE10(v6);
  a1[1] = BYTE8(v6);
  a1[2] = BYTE6(v6);
  *(_QWORD *)a1 &= ~0x1000000uLL;
  a1[4] = BYTE4(v6);
  a1[5] = BYTE2(v6);
  a1[6] = v4 % 100;
  result = (unsigned int)((unsigned __int64)(1374389535LL * v4) >> 32) >> 31;
  a1[7] = v4 / 100;
  return result;
}
