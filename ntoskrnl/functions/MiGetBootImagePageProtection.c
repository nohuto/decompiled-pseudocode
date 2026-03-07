__int64 __fastcall MiGetBootImagePageProtection(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // r11
  _DWORD *v6; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 result; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // r10

  v5 = 0LL;
  v6 = (_DWORD *)*a4;
  if ( !*a4 )
    goto LABEL_9;
  v10 = v6[3];
  if ( a1 < v10 )
    goto LABEL_9;
  v11 = v6[4];
  if ( v11 < v6[2] )
    v11 = v6[2];
  if ( a1 < v10 + v11 )
  {
    v12 = MiComputeDriverProtection(0, v6[9]);
  }
  else
  {
LABEL_9:
    v14 = *(unsigned __int16 *)(a2 + 20) + a2 + 24;
    v15 = v14 + 40LL * *(unsigned __int16 *)(a2 + 6);
    v12 = 1;
    while ( v14 < v15 )
    {
      if ( a1 < *(_DWORD *)(v14 + 12) )
        goto LABEL_7;
      v16 = MiComputeDriverProtection(0, *(_DWORD *)(v14 + 36));
      v5 = v17;
      v12 = v16;
      v14 = v17 + 40;
    }
    v5 = 0LL;
    v12 = (*(_DWORD *)(a3 + 16) >> 5) & 0x1F;
  }
LABEL_7:
  if ( (MiFlags & 0x8000) != 0 && (v12 & 6) == 6 )
    v12 = 3;
  result = v12;
  *a4 = v5;
  return result;
}
