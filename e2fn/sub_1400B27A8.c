void __fastcall sub_1400B27A8(__int64 *a1, __int64 a2, __int64 (__fastcall ***a3)(PVOID P))
{
  __int64 Pool2; // rdi
  _WORD *v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 i; // rcx
  __int16 v10; // dx
  __int64 (__fastcall **v11)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v12; // [rsp+38h] [rbp-28h]
  PVOID P[2]; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  Pool2 = ExAllocatePool2(64LL, 56LL, 1819571039LL);
  if ( !Pool2 )
    return;
  v12 = 0;
  v14 = 0LL;
  v11 = &off_1400D41D0;
  *(_OWORD *)P = 0LL;
  if ( &v11 != a3 )
    sub_1400011A8(&v11, (__int64)a3[2], (unsigned __int64)a3[3]);
  v7 = P[0];
  *(_OWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 16) = &off_1400D41D0;
  *(_WORD *)(Pool2 + 24) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  if ( (__int64 (__fastcall ***)(PVOID))(Pool2 + 16) == &v11 )
    goto LABEL_13;
  if ( v7 )
  {
    v8 = (unsigned __int64)P[1];
    if ( P[1] && !(unsigned int)sub_140001070((_QWORD *)(Pool2 + 16), (__int64)P[1], 0LL) )
    {
      *(_QWORD *)(Pool2 + 40) = 0LL;
      if ( v8 )
      {
        for ( i = 0LL; i < v8; *(_QWORD *)(Pool2 + 40) = i )
        {
          v10 = v7[i];
          if ( !v10 )
            break;
          *(_WORD *)(*(_QWORD *)(Pool2 + 32) + 2 * i) = v10;
          i = *(_QWORD *)(Pool2 + 40) + 1LL;
        }
      }
      *(_WORD *)(*(_QWORD *)(Pool2 + 32) + 2 * v8) = 0;
    }
LABEL_13:
    if ( v7 )
      ExFreePool(v7);
  }
  if ( a1[8] )
  {
    *(_QWORD *)(Pool2 + 8) = a2;
    *(_QWORD *)Pool2 = *(_QWORD *)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = Pool2;
    *(_QWORD *)a2 = Pool2;
  }
  else
  {
    *(_QWORD *)(Pool2 + 8) = a1;
    *(_QWORD *)Pool2 = a1;
    a1[1] = Pool2;
    *a1 = Pool2;
  }
  ++a1[8];
}
