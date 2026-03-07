char __fastcall CursorApiRouter::SendMITCursorShape(struct _CURSINFO *a1, unsigned int a2)
{
  char v2; // di
  HBRUSH v4; // rcx
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  HBITMAP v8; // rcx
  unsigned __int8 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  char *v12; // r12
  int v13; // eax
  int v14; // r13d
  HBITMAP v15; // rcx
  unsigned __int64 v16; // r15
  char v17; // r8
  char v18; // r9
  char v19; // cl
  int *v20; // rdx
  int v21; // eax
  int *v22; // r14
  int v23; // eax
  unsigned __int8 *v24; // r9
  int v25; // r8d
  int v26; // ecx
  unsigned int v27; // kr00_4
  int v28; // ecx
  int v29; // r10d
  int v30; // r9d
  unsigned __int8 *v31; // r8
  unsigned int v32; // ecx
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // r14
  unsigned __int8 *v36; // r11
  unsigned __int8 v37; // r12
  unsigned __int8 *v38; // r15
  unsigned __int8 v39; // cl
  unsigned __int8 *v40; // r10
  char v41; // al
  int v42; // eax
  unsigned __int8 *v44; // [rsp+20h] [rbp-30h]
  __int64 v45; // [rsp+28h] [rbp-28h]
  tagBITMAP v46; // [rsp+30h] [rbp-20h] BYREF
  __int64 v47; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 *v48; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+58h]

  v2 = 1;
  v44 = 0LL;
  v48 = 0LL;
  LODWORD(v47) = 0;
  v4 = (HBRUSH)*((_QWORD *)a1 + 2);
  v6 = 0LL;
  memset(&v46, 0, sizeof(v46));
  if ( v4 )
  {
    if ( !(unsigned int)GreExtGetObjectW(v4, 32LL, &v46) )
      return 0;
    v47 = *(_QWORD *)&v46.bmWidth;
    v7 = *(_QWORD *)&v46.bmWidth;
    v49 = *(_QWORD *)&v46.bmWidth;
LABEL_9:
    LODWORD(v47) = HIDWORD(v49);
    v10 = (unsigned int)(v7 * HIDWORD(v49));
    LODWORD(v49) = 4 * v10 + 40;
    v11 = Win32AllocPoolZInit((unsigned int)v49, 1919964227LL);
    v6 = (_DWORD *)v11;
    if ( !v11 )
    {
      LODWORD(v47) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 532);
LABEL_11:
      v9 = v44;
      v2 = 0;
      goto LABEL_58;
    }
    *(_QWORD *)(v11 + 8) = v7;
    v12 = (char *)(v11 + 40);
    *(_DWORD *)(v11 + 16) = *((__int16 *)a1 + 2);
    v13 = *((__int16 *)a1 + 3);
    v6[9] = (a2 >> 5) & 1;
    v14 = 0;
    v6[5] = v13;
    v6[8] = 1;
    v6[7] = 100;
    v15 = (HBITMAP)*((_QWORD *)a1 + 2);
    if ( v15 )
    {
      if ( !CursorApiRouter::GetCursorColorPixels(v15, &v46, v10, v6 + 10) )
        goto LABEL_11;
      v16 = (unsigned __int64)&v12[4 * v10];
      v17 = 0;
      v18 = 1;
      v19 = 0;
      v20 = v6 + 10;
      if ( (unsigned __int64)v12 >= v16 )
        goto LABEL_31;
      do
      {
        v21 = *v20;
        if ( *v20 == 0xFFFFFF )
        {
          v17 = 1;
        }
        else if ( v21 != -16777216 && v21 != -1 )
        {
          if ( v21 )
          {
            v18 = 0;
            if ( (((v21 & 0xFF000000) + 0x1000000) & 0xFEFFFFFF) != 0 )
            {
              v19 = 1;
              goto LABEL_31;
            }
          }
        }
        ++v20;
      }
      while ( (unsigned __int64)v20 < v16 );
      if ( v18 && v17 )
      {
        v6[6] = 1;
        v22 = v6 + 10;
        do
        {
          v23 = *v22;
          if ( *v22 )
          {
            switch ( v23 )
            {
              case 16777215:
                *v22 = -1;
                break;
              case -16777216:
                *v22 = 0;
                break;
              case -1:
                *v22 = 0xFFFFFF;
                break;
              default:
                LODWORD(v48) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 620);
                break;
            }
          }
          else
          {
            *v22 = -16777216;
          }
          ++v22;
        }
        while ( (unsigned __int64)v22 < v16 );
        PopulateXORTestPattern((char *)v6 + 40, v7, v47);
      }
      else
      {
LABEL_31:
        v6[6] = 0;
        if ( v19 && (unsigned __int64)v12 < v16 )
        {
          v24 = (unsigned __int8 *)v6 + 42;
          do
          {
            v25 = v24[1];
            v26 = *(v24 - 1);
            *v24 = v25 * (unsigned int)*v24 / 0xFF;
            v24 += 4;
            v27 = v25 * v26;
            v28 = *(v24 - 6);
            *(v24 - 5) = v27 / 0xFF;
            *(v24 - 6) = v25 * v28 / 0xFFu;
          }
          while ( (unsigned __int64)(v24 - 2) < v16 );
        }
        PopulateMSLogoTestPattern((char *)v6 + 40, v7, v47);
      }
      v9 = v44;
    }
    else
    {
      v29 = v47;
      v9 = v44;
      v30 = 0;
      v31 = v44;
      v32 = (((int)v7 + 15) >> 3) & 0xFFFFFFFE;
      v6[6] = 1;
      v48 = (unsigned __int8 *)(v6 + 10);
      v33 = &v44[v29 * v32];
      if ( v29 > 0 )
      {
        v34 = v32;
        v45 = v32;
        do
        {
          v35 = *v31;
          v36 = v31 + 1;
          v37 = *v33;
          v38 = v33 + 1;
          v39 = 0x80;
          if ( (int)v7 > 0 )
          {
            v40 = v48;
            do
            {
              v41 = v37 & v39;
              if ( (v39 & v35) != 0 )
                v42 = v41 != 0 ? -1 : -16777216;
              else
                v42 = v41 != 0 ? 0xFFFFFF : 0;
              *(_DWORD *)v40 = v42;
              v40 += 4;
              v39 >>= 1;
              if ( !v39 )
              {
                v35 = *v36;
                v39 = 0x80;
                v37 = *v38;
                ++v36;
                ++v38;
              }
              ++v14;
            }
            while ( v14 < (int)v7 );
            v34 = v45;
            v48 = v40;
            v29 = v47;
          }
          v31 += v34;
          v33 += v34;
          ++v30;
          v14 = 0;
        }
        while ( v30 < v29 );
        v9 = v44;
        v12 = (char *)(v6 + 10);
      }
      PopulateXORTestPattern(v12, v7, v29);
    }
    SendShape(v6, (unsigned int)v49);
    goto LABEL_58;
  }
  if ( !(unsigned int)GreExtGetObjectW(*((HBRUSH *)a1 + 1), 32LL, &v46) )
    return 0;
  v8 = (HBITMAP)*((_QWORD *)a1 + 1);
  LODWORD(v49) = v46.bmWidth;
  HIDWORD(v49) = v46.bmHeight / 2;
  v7 = v49;
  if ( CursorApiRouter::GetCursorMaskAndXorBits(v8, &v46, &v48, (unsigned int *)&v47) )
  {
    v44 = v48;
    goto LABEL_9;
  }
  v9 = v48;
  v2 = 0;
LABEL_58:
  if ( v9 )
    Win32FreePool(v9);
  if ( v6 )
    Win32FreePool(v6);
  return v2;
}
