__int64 __fastcall Edgy::_GetDisambiguationArcData(
        Edgy *this,
        const struct tagEDGY_DATA *a2,
        const struct Edgy::tagARC_DATA *a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  int v6; // r11d
  int v7; // ebx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx

  v3 = *((_QWORD *)this + 26);
  if ( (unsigned int)(*((_DWORD *)a2 + 12) - *((_DWORD *)this + 50)) > *(_DWORD *)(v3 + 20) )
    return 0LL;
  v5 = 1024;
  v6 = *((_DWORD *)a2 + 10) - *((_DWORD *)this + 48);
  v7 = *((_DWORD *)a2 + 11) - *((_DWORD *)this + 49);
  if ( v6 * v6 + v7 * v7 > (unsigned int)(*(_DWORD *)(v3 + 8) * *(_DWORD *)(v3 + 8)) )
  {
    v8 = *((_DWORD *)this + 54);
    v9 = 0;
    v10 = 0;
    v5 = 1536;
    if ( v8 )
    {
      v11 = v8 - 1;
      if ( !v11 )
      {
        v9 = v7;
LABEL_9:
        v10 = v6;
        goto LABEL_14;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_14;
        v9 = -v7;
        goto LABEL_9;
      }
      v9 = -v6;
    }
    else
    {
      v9 = v6;
    }
    v10 = v7;
LABEL_14:
    if ( v9 * *(__int16 *)(v3 + 12) + v10 * *(__int16 *)(v3 + 14) >= 0
      && v10 * *(__int16 *)(v3 + 18) - v9 * *(__int16 *)(v3 + 16) <= 0 )
    {
      return 1792;
    }
  }
  return v5;
}
