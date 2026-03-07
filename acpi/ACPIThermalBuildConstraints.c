__int64 __fastcall ACPIThermalBuildConstraints(__int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // r15
  unsigned int v9; // r14d
  __int64 Pool2; // rax
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  size_t Size[2]; // [rsp+30h] [rbp-40h]
  void *Src; // [rsp+40h] [rbp-30h]
  _OWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v17; // [rsp+68h] [rbp-8h]

  Src = 0LL;
  v17 = 0LL;
  *(_OWORD *)Size = 0LL;
  memset(v16, 0, sizeof(v16));
  v6 = AMLIEvalNameSpaceObject(a1, (__int64)v16, 0, 0LL, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    if ( WORD1(v16[0]) == 4 )
    {
      v7 = 0;
      v8 = *(_QWORD *)(a2 + 200);
      v9 = *v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          v6 = AMLIEvalPkgDataElement((__int64)v16, v7, (__int64)&v13);
          if ( v6 < 0 )
            goto LABEL_17;
          if ( WORD1(v13) != 2 )
            break;
          Pool2 = ExAllocatePool2(64LL, (unsigned int)(LODWORD(Size[1]) + 56), 1416651585LL);
          v11 = Pool2;
          if ( !Pool2 )
          {
            v6 = -1073741670;
LABEL_16:
            AMLIFreeDataBuffs((__int64)&v13);
            goto LABEL_17;
          }
          memmove((void *)(Pool2 + 56), Src, LODWORD(Size[1]));
          AMLIFreeDataBuffs((__int64)&v13);
          *(_QWORD *)(v11 + 32) = a2;
          *(_DWORD *)(v11 + 48) = v7;
          *(_BYTE *)(v11 + 52) = a3;
          *(_BYTE *)(v11 + 54) = a4;
          if ( a3 )
          {
            *(_BYTE *)(v11 + 53) = *(_BYTE *)(v8 + 96);
            *(_BYTE *)(v11 + 55) = 0;
          }
          else
          {
            *(_BYTE *)(v11 + 53) = 100;
            if ( (unsigned int)a4 >= *(_DWORD *)(v8 + 92) )
              *(_BYTE *)(v11 + 55) = 1;
          }
          ACPIThermalActivateConstraint((_QWORD *)v11);
          if ( ++v7 >= v9 )
            goto LABEL_17;
        }
        v6 = -1072431095;
        goto LABEL_16;
      }
    }
    else
    {
      v6 = -1072431095;
    }
LABEL_17:
    AMLIFreeDataBuffs((__int64)v16);
  }
  return (unsigned int)v6;
}
