__int64 __fastcall KiVerifyXcpt10(_DWORD **a1)
{
  int *v1; // rax
  __int64 result; // rax
  int *v3; // rcx
  int v4; // eax
  _DWORD **v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+20h] [rbp-18h]
  _DWORD **v11; // [rsp+40h] [rbp+8h]
  int *v12; // [rsp+48h] [rbp+10h]

  v11 = a1;
  v10 = &v9;
  v1 = (int *)a1 + 3;
  v12 = (int *)a1 + 3;
  if ( *((_DWORD *)a1 + 2) != 1 )
  {
    *v1 = -1;
    *((_DWORD *)a1 + 4) = 1;
    goto LABEL_3;
  }
  *v1 = 1;
  while ( 1 )
  {
    v3 = v12;
    v4 = *v12;
    if ( !*v12 )
      break;
    if ( v4 != 11 )
    {
      if ( v4 != 1 )
        goto LABEL_10;
      local_unwind((ULONG_PTR)v10, (__int64)&loc_140B5D63B);
    }
    local_unwind((ULONG_PTR)v10, (__int64)&loc_140B5D62E);
LABEL_10:
    *v3 = 0;
  }
  *v12 = 11;
  v5 = v11;
  ++**v11;
  v6 = *v12 + 11;
  *v12 = v6;
  if ( v6 == 99 )
    local_unwind((ULONG_PTR)v10, (__int64)&loc_140B5D62E);
  ++**v5;
  *v3 += 11;
  if ( *v3 == 55 )
    *v3 = 66;
  else
    ++**v5;
  v7 = *v3 + 11;
  *v3 = v7;
  if ( v7 == 99 )
    ++**v5;
  else
    local_unwind((ULONG_PTR)v10, (__int64)&loc_140B5D62E);
  v8 = *v3 + 11;
  *v3 = v8;
  if ( v8 == 99 )
    ++**v5;
  else
    KiVerifyXcptFilter(v5);
  a1 = v11;
  v1 = v12;
LABEL_3:
  result = *v1;
  a1[3] = (_DWORD *)((char *)a1[3] + result);
  return result;
}
