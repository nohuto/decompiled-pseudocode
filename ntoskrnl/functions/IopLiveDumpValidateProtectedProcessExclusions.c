__int64 __fastcall IopLiveDumpValidateProtectedProcessExclusions(__int64 a1)
{
  __int64 *v1; // r11
  __int64 *v3; // r10
  __int64 *v4; // rbx
  char v5; // cl
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 *v9; // rax
  char v10; // cl
  char v12; // cl

  v1 = (__int64 *)PsActiveProcessHead;
  LODWORD(v3) = 0;
  while ( v1 != &PsActiveProcessHead )
  {
    v4 = v1 - 137;
    v5 = *((_BYTE *)v1 + 1074) & 7;
    if ( v5 == 2 )
    {
      if ( (*((_BYTE *)v1 + 1074) & 0xF0) == 0x70 )
        goto LABEL_19;
    }
    else if ( v5 != 1 )
    {
      goto LABEL_19;
    }
    v6 = *((unsigned int *)v4 + 272);
    v7 = IopLiveDumpLookupProcessFilter(a1, v6);
    if ( !v7 )
    {
      v8 = v3;
      v9 = *(__int64 **)(a1 + 1200);
      v10 = (char)v3;
      if ( v9 != (__int64 *)(a1 + 1200) )
      {
        while ( 1 )
        {
          v8 = v9;
          if ( *((_DWORD *)v9 + 8) == (_DWORD)v3 )
            break;
          v9 = (__int64 *)*v9;
          if ( v9 == (__int64 *)(a1 + 1200) )
            goto LABEL_13;
        }
        v10 = 1;
      }
      v12 = -v10;
      v7 = (unsigned __int64)v8 & -(__int64)(v12 != 0);
      if ( !v7 )
      {
LABEL_13:
        LODWORD(v3) = -2147483622;
        return (unsigned int)v3;
      }
      *(_QWORD *)(((unsigned __int64)v8 & -(__int64)(v12 != 0)) + 0x10) = v6;
LABEL_18:
      *(_DWORD *)(v7 + 32) = 2;
      *(_QWORD *)(v7 + 24) = v4;
      goto LABEL_19;
    }
    if ( *(__int64 **)(v7 + 24) != v4 )
      goto LABEL_18;
    if ( *(_DWORD *)(v7 + 32) != 2 )
      *(_DWORD *)(v7 + 32) = 2;
LABEL_19:
    v1 = (__int64 *)*v1;
  }
  return (unsigned int)v3;
}
