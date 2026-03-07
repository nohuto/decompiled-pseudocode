__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, __int64 a3, _QWORD *a4, __int64 *a5, char a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int FontHandle; // edi
  _DWORD *v11; // rdx
  void *Memory; // rax
  __int64 v13; // rbx
  unsigned int *v14; // r12
  _QWORD *v15; // r13
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 *v24; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+38h] [rbp-28h]
  _DWORD v26[6]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  FontHandle = 0;
  v22 = 0LL;
  v23 = 0LL;
  *a5 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v25 = *(_QWORD *)BgpGetResolution(v26);
      if ( *v11 <= (unsigned int)v25 && v11[1] <= HIDWORD(v25) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x50uLL);
        v13 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
LABEL_24:
          *a5 = v13;
          return (unsigned int)FontHandle;
        }
        memset(Memory, 0, 0x50uLL);
        if ( a3 )
        {
          v14 = (unsigned int *)(v13 + 40);
          *(_OWORD *)(v13 + 40) = *(_OWORD *)a3;
          *(_QWORD *)(v13 + 56) = *(_QWORD *)(a3 + 16);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL, &v24);
          if ( FontHandle < 0 )
            goto LABEL_37;
          *(_DWORD *)(v13 + 44) = -1;
          v14 = (unsigned int *)(v13 + 40);
          *(_DWORD *)(v13 + 40) = 0;
          v21 = v24;
          *(_DWORD *)(v13 + 60) = 0;
          *(_QWORD *)(v13 + 48) = v21;
          *(_DWORD *)(v13 + 56) = 18;
        }
        v15 = (_QWORD *)(v13 + 64);
        if ( a4 )
        {
          *v15 = *a4;
          goto LABEL_10;
        }
        FontHandle = BgpFoGetTextMetrics((__int64)v14, v13 + 64);
        if ( FontHandle >= 0 )
        {
LABEL_10:
          if ( (a6 & 1) == 0 )
          {
            v16 = *(_DWORD *)(v13 + 68);
            if ( a2[1] < v16 )
              a2[1] = v16;
            if ( *a2 < *(_DWORD *)v15 )
              *a2 = *(_DWORD *)v15;
          }
          if ( *a1 + *a2 > (unsigned int)v25 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v25) )
          {
            FontHandle = -1073741811;
            goto LABEL_33;
          }
          if ( (a6 & 2) == 0 )
          {
            v20 = BgpGxRectangleCreate(a2, 32, &v22);
            v6 = v22;
            FontHandle = v20;
            if ( v20 < 0 )
              goto LABEL_33;
            BgpGxFillRectangle(v22, *v14);
          }
          if ( (a6 & 9) == 0 )
            goto LABEL_21;
          v17 = BgpGxRectangleCreate(a2, 32, &v23);
          v7 = v23;
          FontHandle = v17;
          if ( v17 >= 0 )
          {
            *(_QWORD *)(v13 + 32) = v23;
LABEL_21:
            *(_QWORD *)v13 = *(_QWORD *)a1;
            *(_QWORD *)(v13 + 8) = *(_QWORD *)a2;
            v18 = a2[2];
            *(_DWORD *)(v13 + 76) = 0;
            *(_DWORD *)(v13 + 16) = v18;
            *(_QWORD *)(v13 + 24) = v6;
            *(_DWORD *)(v13 + 72) = 1;
            if ( (a6 & 4) != 0 )
              *(_DWORD *)(v13 + 72) = 5;
            if ( FontHandle >= 0 )
              goto LABEL_24;
          }
LABEL_33:
          if ( v6 )
            BgpGxRectangleDestroy(v6);
          if ( v7 )
            BgpGxRectangleDestroy(v7);
        }
LABEL_37:
        BgpFwFreeMemory(v13);
        goto LABEL_24;
      }
    }
  }
  return 3221225485LL;
}
