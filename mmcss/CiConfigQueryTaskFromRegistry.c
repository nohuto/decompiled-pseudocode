__int64 __fastcall CiConfigQueryTaskFromRegistry(HANDLE KeyHandle, char *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  char v8; // cl
  char v9; // cl

  *(_BYTE *)(a3 + 3) &= 0x8Fu;
  LODWORD(v3) = 0;
  if ( CiConfigTaskValues )
  {
    while ( 1 )
    {
      result = CiConfigQueryValue(KeyHandle);
      if ( (int)result < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( !*(&CiConfigTaskValues + v3) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v8 = *a2;
    *(_QWORD *)(a3 + 32) = *((unsigned int *)a2 + 4);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 6);
    *(_BYTE *)(a3 + 1) = a2[8];
    *(_BYTE *)(a3 + 2) = a2[40];
    v9 = *(_BYTE *)(a3 + 3) & 0x89 | (2 * (a2[48] & 1 | (2 * (a2[32] & 1 | (4 * (v8 & 7))))));
    *(_BYTE *)(a3 + 40) = a2[56];
    result = 0LL;
    *(_BYTE *)(a3 + 3) = v9;
  }
  return result;
}
