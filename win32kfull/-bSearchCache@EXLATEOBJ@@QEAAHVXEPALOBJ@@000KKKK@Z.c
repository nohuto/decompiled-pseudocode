__int64 EXLATEOBJ::bSearchCache(Gre::Base *a1, ...)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  int v5; // r12d
  int v6; // r13d
  unsigned int v7; // esi
  int v8; // eax
  int v9; // r11d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  _DWORD *v15; // r8
  int v16; // r9d
  int v17; // r10d
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  va_list va1; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF
  va_list va2; // [rsp+88h] [rbp+20h]
  __int64 v26; // [rsp+90h] [rbp+28h] BYREF
  va_list va3; // [rsp+90h] [rbp+28h]
  __int64 v28; // [rsp+98h] [rbp+30h]
  __int64 v29; // [rsp+A0h] [rbp+38h]
  __int64 v30; // [rsp+A8h] [rbp+40h]
  __int64 v31; // [rsp+B0h] [rbp+48h]
  va_list va4; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  v28 = va_arg(va4, _QWORD);
  v29 = va_arg(va4, _QWORD);
  v30 = va_arg(va4, _QWORD);
  v31 = va_arg(va4, _QWORD);
  v1 = *(_DWORD *)(v20 + 56);
  v2 = v20;
  v4 = Gre::Base::Globals(a1);
  v19[0] = *((_QWORD *)v4 + 5);
  GreAcquireSemaphore(v19[0]);
  v5 = v29;
  v6 = v28;
  v7 = 1;
  while ( 1 )
  {
    v8 = XEPALOBJ::ulTime((XEPALOBJ *)va);
    if ( *(_DWORD *)((char *)v4 + v10 + 6648) == v8 )
    {
      v11 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
      if ( *(_DWORD *)((char *)v4 + v12 + 6652) == v11 )
      {
        v13 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
        if ( *(_DWORD *)((char *)v4 + v14 + 6660) == v13 )
        {
          v15 = *(_DWORD **)((char *)v4 + v14 + 6640);
          *(_QWORD *)a1 = v15;
          v16 = v15[19];
          if ( (v16 & 0x6000) == (_DWORD)v31 )
          {
            v17 = v15[1];
            if ( (v16 & 0x100) == 0 && (v17 & 4) == 0
              || (v17 & 4) != 0
              && (_DWORD)v30 == v15[6]
              && *((_DWORD *)v4 + 8 * v1 + 1664) == (unsigned int)XEPALOBJ::ulTime((XEPALOBJ *)va2) )
            {
              break;
            }
            if ( (v16 & 0x100) != 0 && v6 == v15[7] && v5 == v15[8] )
              break;
          }
        }
      }
    }
    v1 = ((_BYTE)v1 + 1) & 7;
    if ( (unsigned int)(v9 + 1) >= 8 )
    {
      *(_QWORD *)a1 = 0LL;
      v7 = 0;
      goto LABEL_15;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)((char *)v4 + v14 + 6632), 1u);
  *(_DWORD *)(v2 + 56) = v1;
LABEL_15:
  SEMOBJ::vUnlock((SEMOBJ *)v19);
  return v7;
}
