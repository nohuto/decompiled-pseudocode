void __fastcall NSInstrumentation::WriteBackTraceDumpBufferCallback(
        NSInstrumentation *this,
        _OWORD *a2,
        _DWORD *a3,
        void *a4)
{
  __int64 v4; // r9
  unsigned int v5; // eax

  v4 = *(_QWORD *)a3;
  v5 = a3[2];
  if ( *(_QWORD *)a3 )
  {
    if ( v5 >= 0xA8 )
    {
      *(_QWORD *)v4 = this;
      *(_OWORD *)(v4 + 8) = *a2;
      *(_OWORD *)(v4 + 24) = a2[1];
      *(_OWORD *)(v4 + 40) = a2[2];
      *(_OWORD *)(v4 + 56) = a2[3];
      *(_OWORD *)(v4 + 72) = a2[4];
      *(_OWORD *)(v4 + 88) = a2[5];
      *(_OWORD *)(v4 + 104) = a2[6];
      *(_OWORD *)(v4 + 120) = a2[7];
      *(_OWORD *)(v4 + 136) = a2[8];
      *(_OWORD *)(v4 + 152) = a2[9];
      a3[2] -= 168;
      *(_QWORD *)a3 = v4 + 168;
    }
  }
  else if ( v5 + 168 < v5 )
  {
    a3[2] = -1;
  }
  else
  {
    a3[2] = v5 + 168;
  }
}
