__int64 MiAssignSessionRanges()
{
  __int64 v0; // r12
  _QWORD *v1; // r15
  ULONG v2; // ebx
  __int64 v3; // r13
  int v4; // esi
  unsigned __int64 v5; // rdi
  ULONG ClearBitsAndSet; // eax
  __int64 result; // rax
  __int16 v8; // ax
  RTL_BITMAP BitMapHeader; // [rsp+28h] [rbp-59h] BYREF
  int v10; // [rsp+38h] [rbp-49h]
  _DWORD v11[9]; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v12; // [rsp+60h] [rbp-21h]
  _BYTE v13[64]; // [rsp+68h] [rbp-19h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v11, 0, 12);
  memset(&v11[6], 0, 12);
  memset(v13, 0, sizeof(v13));
  v0 = qword_140C6A208;
  BitMapHeader.Buffer = (unsigned int *)v13;
  v10 = 0;
  *(_QWORD *)&v11[3] = 0x2000000000LL;
  v12 = 0x1000000000LL;
  v11[5] = 1;
  v1 = &v11[1];
  v2 = ExGenRandom(1) & 0x1FF;
  v3 = 2LL;
  do
  {
    v4 = 16;
    v5 = (unsigned __int64)(v1[1] + 0x3FFFFFFFLL) >> 30;
    if ( (unsigned int)v5 < 0x20 )
    {
      v8 = ExGenRandom(1);
      v4 = 0;
LABEL_8:
      v2 = v8 & 0x1FF;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, v5, v2);
    if ( ClearBitsAndSet != v2 && v4 )
    {
      --v4;
      RtlClearBits(&BitMapHeader, ClearBitsAndSet, v5);
      v8 = ExGenRandom(1);
      goto LABEL_8;
    }
    *v1 = v0 + ((unsigned __int64)ClearBitsAndSet << 30);
    v1 += 3;
    v2 = ((_WORD)ClearBitsAndSet + (_WORD)v5 + (unsigned __int8)ExGenRandom(1)) & 0x1FF;
    --v3;
  }
  while ( v3 );
  qword_140C65678 = *(_QWORD *)&v11[1];
  result = *(_QWORD *)&v11[7];
  qword_140C66CB0 = *(_QWORD *)&v11[7];
  qword_140C65668 = v0;
  return result;
}
