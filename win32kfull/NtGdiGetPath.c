__int64 __fastcall NtGdiGetPath(HDC a1, struct _POINTL *Address, char *a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // r12
  char *v10; // rsi
  int v11; // r14d
  char *v12; // r8
  char flags; // cl
  char v14; // dl
  ULONG v15; // ecx
  struct _PATHDATA v17; // [rsp+28h] [rbp-E0h] BYREF
  DC *v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h]

  v4 = a4;
  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] || (int)v4 < 0 )
    goto LABEL_29;
  if ( !(unsigned int)DC::bInactive(v18[0]) )
  {
    v15 = 1003;
LABEL_30:
    EngSetLastError(v15);
    goto LABEL_31;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v18, 1026);
  if ( !v19[0] )
  {
LABEL_29:
    v15 = 87;
    goto LABEL_30;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v20, *((struct HPATH__ **)v18[0] + 25));
  if ( v21 )
  {
    v8 = EPATHOBJ::cTotalPts((EPATHOBJ *)&v20);
    v7 = v8;
    if ( !(_DWORD)v4 )
      goto LABEL_27;
    if ( (int)v4 >= v8 && (unsigned __int64)(int)v4 <= 0x1FFFFFFF )
    {
      v17 = 0LL;
      v20 &= ~8u;
      *(_QWORD *)(v21 + 72) = *(_QWORD *)(v21 + 32);
      ProbeForWrite(Address, 8LL * (int)v4, 4u);
      ProbeForWrite(a3, (int)v4, 4u);
      v9 = a3;
      v10 = &a3[v4];
      while ( 1 )
      {
        v11 = EPATHOBJ::bEnum((EPATHOBJ *)&v20, &v17);
        if ( v17.count )
        {
          if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v19, v17.pptfx, Address, v17.count) )
          {
            EngSetLastError(0x216u);
            v7 = -1;
            goto LABEL_27;
          }
          Address += v17.count;
          v12 = &a3[v17.count];
          flags = v17.flags;
          if ( (v17.flags & 1) != 0 && a3 < v10 )
          {
            *a3++ = 6;
            flags = v17.flags;
          }
          v14 = (flags & 0x10) != 0 ? 4 : 2;
          if ( v12 <= v10 )
          {
            while ( a3 < v12 )
            {
              *a3++ = v14;
              flags = v17.flags;
            }
          }
          if ( (flags & 8) != 0 && a3 > v9 && a3 <= v10 )
            *(a3 - 1) |= 1u;
        }
        if ( !v11 )
          goto LABEL_27;
      }
    }
    EngSetLastError(0x57u);
    v7 = -1;
  }
  else
  {
    EngSetLastError(0x57u);
  }
LABEL_27:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v20);
LABEL_31:
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v7;
}
