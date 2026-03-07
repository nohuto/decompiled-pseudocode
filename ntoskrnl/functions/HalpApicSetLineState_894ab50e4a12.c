__int64 __fastcall HalpApicSetLineState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // [rsp+30h] [rbp+10h] BYREF
  int v10; // [rsp+48h] [rbp+28h] BYREF

  v10 = 0;
  v9 = 0;
  result = HalpApicConvertToRte(a3, &v9, &v10);
  if ( (int)result >= 0 )
  {
    if ( *a2 != *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v6 = a2[1];
    if ( v6 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 40) )
      {
        v7 = *(_DWORD **)(a1 + 16);
        *v7 = 2 * v6 + 17;
        v7[4] = v10;
        *v7 = 2 * a2[1] + 16;
        v7[4] = v9;
      }
      return 0LL;
    }
    switch ( v6 )
    {
      case -7:
        v8 = *(unsigned int *)(a1 + 32);
        break;
      case -5:
        v8 = 864LL;
        goto LABEL_16;
      case -3:
        v8 = 832LL;
        goto LABEL_16;
      case -8:
        v8 = *(unsigned int *)(a1 + 36);
        break;
      case -6:
        v8 = 880LL;
        goto LABEL_16;
      case -4:
        v8 = 848LL;
        goto LABEL_16;
      case -2:
        v8 = 816LL;
LABEL_16:
        ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(v8, v9);
        return 0LL;
      default:
        return 3221225485LL;
    }
    if ( !(_DWORD)v8 )
      return 0LL;
    goto LABEL_16;
  }
  return result;
}
