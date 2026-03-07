__int64 __fastcall RtlpBase64Encode(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // edi
  char v7; // dl
  unsigned int v8; // r9d
  unsigned __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned __int8 v11; // cl

  v3 = 0LL;
  v4 = 0;
  do
  {
    v7 = *a1;
    ++v4;
    v8 = (unsigned __int8)a1[1];
    v9 = (unsigned __int8)*a1;
    v10 = (unsigned __int8)a1[2];
    a1 += 3;
    *(_BYTE *)(v3 + a3) = *((_BYTE *)qword_140045E20 + (v9 >> 2));
    v3 += 4LL;
    *(_BYTE *)(v3 + a3 - 3) = *((_BYTE *)qword_140045E20
                              + (((unsigned __int64)v8 >> 4) | (unsigned __int8)(16 * (v7 & 3))));
    *(_BYTE *)(v3 + a3 - 2) = *((_BYTE *)qword_140045E20
                              + (((unsigned __int64)v10 >> 6) | (unsigned __int8)(4 * (v8 & 0xF))));
    *(_BYTE *)(v3 + a3 - 1) = *((_BYTE *)qword_140045E20 + (v10 & 0x3F));
  }
  while ( v4 < 5 );
  v11 = 2 * (*a1 & 3);
  *(_BYTE *)(v3 + a3) = *((_BYTE *)qword_140045E20 + ((unsigned __int64)(unsigned __int8)*a1 >> 2));
  *(_BYTE *)(v3 + a3 + 1) = qword_140045E20[v11];
  strcpy((char *)(v3 + a3 + 2), "==");
  return 0LL;
}
