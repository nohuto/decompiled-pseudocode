/*
 * XREFs of ?SendMITCursorShape@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A3E8
 * Callers:
 *     ?DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z @ 0x1C023A0E4 (-DwmSetPointer@CursorApiRouter@@CA_NPEAU_CURSINFO@@K@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1C023A12C (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1C023A208 (-GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z.c)
 *     ?PopulateMSLogoTestPattern@@YAXPEAXHH@Z @ 0x1C023A2EC (-PopulateMSLogoTestPattern@@YAXPEAXHH@Z.c)
 *     ?PopulateXORTestPattern@@YAXPEAXHH@Z @ 0x1C023A36C (-PopulateXORTestPattern@@YAXPEAXHH@Z.c)
 */

char __fastcall CursorApiRouter::SendMITCursorShape(struct _CURSINFO *a1, unsigned int a2)
{
  char v2; // di
  HBRUSH v4; // rcx
  __int64 v5; // rsi
  __int64 v7; // rbx
  HSURF v8; // rcx
  unsigned __int8 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int *v12; // r12
  HSURF v13; // rcx
  char v14; // r8
  unsigned __int64 v15; // r15
  char v16; // cl
  char v17; // r10
  unsigned int *v18; // rdx
  unsigned int v19; // eax
  unsigned int *v20; // r14
  unsigned int v21; // eax
  unsigned __int8 *v22; // r9
  int v23; // r8d
  int v24; // ecx
  unsigned int v25; // kr00_4
  int v26; // ecx
  int v27; // r9d
  int v28; // r10d
  unsigned __int8 *v29; // r8
  unsigned int v30; // ecx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  unsigned __int8 *v33; // r15
  unsigned __int8 v34; // si
  unsigned __int8 *v35; // r14
  int v36; // r12d
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // r9
  int *v39; // r10
  char v40; // al
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-50h]
  unsigned __int8 *v44; // [rsp+28h] [rbp-48h]
  int *v45; // [rsp+30h] [rbp-40h]
  __int64 v46; // [rsp+38h] [rbp-38h]
  __int64 v47; // [rsp+40h] [rbp-30h]
  struct tagBITMAP v48; // [rsp+48h] [rbp-28h] BYREF
  __int64 v49; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int8 *v50; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v51; // [rsp+C8h] [rbp+58h]

  LODWORD(v49) = 0;
  v2 = 1;
  v44 = 0LL;
  v50 = 0LL;
  v4 = (HBRUSH)*((_QWORD *)a1 + 2);
  v5 = 0LL;
  memset(&v48, 0, sizeof(v48));
  if ( v4 )
  {
    if ( !(unsigned int)GreExtGetObjectW(v4, 32LL, (char *)&v48) )
      return 0;
    v49 = *(_QWORD *)&v48.bmWidth;
    v7 = *(_QWORD *)&v48.bmWidth;
    v51 = *(_QWORD *)&v48.bmWidth;
LABEL_9:
    LODWORD(v50) = HIDWORD(v51);
    v10 = (unsigned int)(v7 * HIDWORD(v51));
    v43 = 4 * v10 + 40;
    v11 = Win32AllocPoolZInit(v43, 1919964227LL);
    v47 = v11;
    v5 = v11;
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_11:
      v9 = v44;
      v2 = 0;
      goto LABEL_58;
    }
    *(_QWORD *)(v11 + 8) = v7;
    v12 = (unsigned int *)(v11 + 40);
    *(_DWORD *)(v11 + 16) = *((__int16 *)a1 + 2);
    *(_DWORD *)(v11 + 20) = *((__int16 *)a1 + 3);
    *(_DWORD *)(v11 + 32) = 1;
    *(_DWORD *)(v11 + 36) = (a2 >> 5) & 1;
    *(_DWORD *)(v11 + 28) = 100;
    v13 = (HSURF)*((_QWORD *)a1 + 2);
    if ( v13 )
    {
      if ( !CursorApiRouter::GetCursorColorPixels(v13, &v48, v10, v12) )
        goto LABEL_11;
      v14 = 0;
      v15 = (unsigned __int64)&v12[v10];
      v16 = 0;
      v17 = 1;
      v18 = v12;
      if ( (unsigned __int64)v12 >= v15 )
        goto LABEL_31;
      do
      {
        v19 = *v18;
        if ( *v18 == 0xFFFFFF )
        {
          v14 = 1;
        }
        else if ( v19 != -16777216 && v19 != -1 )
        {
          if ( v19 )
          {
            v17 = 0;
            if ( (((v19 & 0xFF000000) + 0x1000000) & 0xFEFFFFFF) != 0 )
            {
              v16 = 1;
              goto LABEL_31;
            }
          }
        }
        ++v18;
      }
      while ( (unsigned __int64)v18 < v15 );
      if ( v17 && v14 )
      {
        *(_DWORD *)(v5 + 24) = 1;
        v20 = v12;
        do
        {
          v21 = *v20;
          if ( *v20 )
          {
            switch ( v21 )
            {
              case 0xFFFFFFu:
                *v20 = -1;
                break;
              case 0xFF000000:
                *v20 = 0;
                break;
              case 0xFFFFFFFF:
                *v20 = 0xFFFFFF;
                break;
              default:
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
                break;
            }
          }
          else
          {
            *v20 = -16777216;
          }
          ++v20;
        }
        while ( (unsigned __int64)v20 < v15 );
        PopulateXORTestPattern((char *)v12, v7, (int)v50);
      }
      else
      {
LABEL_31:
        *(_DWORD *)(v5 + 24) = 0;
        if ( v16 && (unsigned __int64)v12 < v15 )
        {
          v22 = (unsigned __int8 *)(v5 + 42);
          do
          {
            v23 = v22[1];
            v24 = *(v22 - 1);
            *v22 = v23 * (unsigned int)*v22 / 0xFF;
            v22 += 4;
            v25 = v23 * v24;
            v26 = *(v22 - 6);
            *(v22 - 5) = v25 / 0xFF;
            *(v22 - 6) = v23 * v26 / 0xFFu;
          }
          while ( (unsigned __int64)(v22 - 2) < v15 );
        }
        PopulateMSLogoTestPattern((char *)v12, v7, (int)v50);
      }
      v9 = v44;
    }
    else
    {
      v27 = (int)v50;
      v9 = v44;
      v28 = 0;
      v29 = v44;
      v30 = (((int)v7 + 15) >> 3) & 0xFFFFFFFE;
      *(_DWORD *)(v11 + 24) = 1;
      v45 = (int *)(v11 + 40);
      LODWORD(v51) = 0;
      v31 = &v44[v27 * v30];
      if ( v27 > 0 )
      {
        v32 = v30;
        v46 = v30;
        do
        {
          v33 = v29 + 1;
          v34 = *v31;
          v35 = v31 + 1;
          v36 = 0;
          LOBYTE(v49) = *v29;
          v37 = 0x80;
          if ( (int)v7 > 0 )
          {
            v38 = v49;
            v39 = v45;
            do
            {
              v40 = v34 & v37;
              if ( (v37 & v38) != 0 )
                v41 = v40 != 0 ? -1 : -16777216;
              else
                v41 = v40 != 0 ? 0xFFFFFF : 0;
              *v39++ = v41;
              v37 >>= 1;
              if ( !v37 )
              {
                v38 = *v33;
                v37 = 0x80;
                v34 = *v35;
                ++v33;
                ++v35;
              }
              ++v36;
            }
            while ( v36 < (int)v7 );
            v27 = (int)v50;
            v32 = v46;
            v45 = v39;
            v28 = v51;
          }
          ++v28;
          v29 += v32;
          v31 += v32;
          LODWORD(v51) = v28;
        }
        while ( v28 < v27 );
        v5 = v47;
        v9 = v44;
        v12 = (unsigned int *)(v47 + 40);
      }
      PopulateXORTestPattern((char *)v12, v7, v27);
    }
    SendShape(v5, v43);
    goto LABEL_58;
  }
  if ( !(unsigned int)GreExtGetObjectW(*((HBRUSH *)a1 + 1), 32LL, (char *)&v48) )
    return 0;
  LODWORD(v51) = v48.bmWidth;
  v8 = (HSURF)*((_QWORD *)a1 + 1);
  HIDWORD(v51) = v48.bmHeight / 2;
  v7 = v51;
  if ( CursorApiRouter::GetCursorMaskAndXorBits(v8, &v48, &v50, (unsigned int *)&v49) )
  {
    v44 = v50;
    goto LABEL_9;
  }
  v9 = v50;
  v2 = 0;
LABEL_58:
  if ( v9 )
    Win32FreePool(v9);
  if ( v5 )
    Win32FreePool(v5);
  return v2;
}
