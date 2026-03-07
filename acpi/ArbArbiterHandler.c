__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  int v7; // eax
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx

  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
        break;
      case 7:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
        break;
      case 8:
        goto LABEL_8;
      case 9:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        break;
      default:
        goto LABEL_18;
    }
  }
  else
  {
    if ( a2 == 5 )
    {
LABEL_8:
      v6 = -1073741822;
      goto LABEL_27;
    }
    if ( a2 )
    {
      switch ( a2 )
      {
        case 1:
          v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
          break;
        case 2:
          v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
          break;
        case 3:
          v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
          break;
        case 4:
          goto LABEL_8;
        default:
LABEL_18:
          v6 = -1073741811;
          goto LABEL_27;
      }
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    }
  }
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeClearEvent(v9);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v8 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v8, 0, 0);
    }
  }
LABEL_27:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v6;
}
