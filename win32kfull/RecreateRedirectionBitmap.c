__int64 __fastcall RecreateRedirectionBitmap(void **a1, LONG a2, int a3, int a4, int a5, HBRUSH *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  __int64 v14; // rax
  int v15; // ebx
  int v16; // eax
  HBRUSH v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // r9
  LONG x; // r15d
  bool v21; // zf
  int v22; // r13d
  _DWORD *v23; // rcx
  HWND v24; // rdx
  LONG v25; // eax
  struct _POINTL v28; // [rsp+48h] [rbp-61h] BYREF
  int v29; // [rsp+50h] [rbp-59h]
  int v30; // [rsp+54h] [rbp-55h]
  struct _POINTL v31; // [rsp+58h] [rbp-51h] BYREF
  struct tagBITMAP v32; // [rsp+60h] [rbp-49h] BYREF
  struct tagBITMAP v33; // [rsp+80h] [rbp-29h] BYREF
  struct _RECTL v34; // [rsp+A0h] [rbp-9h] BYREF

  v28.x = a2;
  v31 = 0LL;
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v29 = 0;
  v30 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HBRUSH)RedirectionBitmap;
  v14 = HmgShareLockCheck(RedirectionBitmap, v12);
  *(_QWORD *)&v34.left = v14;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 112);
    DEC_SHARE_REF_CNT(v14);
    if ( (v15 & 0x800000) != 0 && a4 && !v9 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
  }
  v16 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (__int64 *)&v31);
  v17 = (HBRUSH)v31;
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v31, 0) )
      goto LABEL_6;
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v17, 1);
    v18 = -1073741801;
  }
  SetRedirectionBitmap(a1, 0LL, 0);
  v30 = 1;
LABEL_6:
  if ( v17 && !v9 )
  {
    if ( v13 )
    {
      GreExtGetObjectW(v13, 32LL, &v33);
      v29 = 1;
    }
    GreExtGetObjectW(v17, 32LL, &v32);
  }
  if ( (GetRedirectionFlags(a1) & 1) != 0
    && (HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), (const struct tagWND *)a1, 0LL, v9 == 0 ? 2 : 0), v17) )
  {
    HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), (const struct tagWND *)a1, (__int64)v17, v9 == 0 ? 2 : 0);
    x = v28.x;
    v21 = v9 == 0;
    v22 = a3;
    if ( v21 )
    {
      v23 = a1[5];
      v24 = (HWND)*a1;
      v31.x = v23[22];
      v25 = v23[23];
      v34.left = 0;
      v34.top = 0;
      v31.y = v25;
      v34.right = v32.bmWidth;
      v34.bottom = v32.bmHeight;
      v28.x = -v28.x;
      v28.y = -a3;
      GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v24, &v34, v19, &v28, &v31);
    }
  }
  else
  {
    v22 = a3;
    x = v28.x;
  }
  if ( v29 )
  {
    BltOldRedirectionBitsToNewBitmap((struct tagWND *)a1, (HBITMAP)v13, (HBITMAP)v17, &v33, &v32, x, v22);
    GreNotifyDirtySprite((HWND)*a1);
  }
  ChangeRedirectionParentInDCEs((struct tagWND *)a1);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v13, 1);
  }
  return v18;
}
