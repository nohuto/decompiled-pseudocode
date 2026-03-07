__int64 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  __int64 SessionDpiMetrics; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // edx
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+2Ch] [rbp-D4h]
  int v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+94h] [rbp-6Ch]
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int v40; // [rsp+214h] [rbp+114h]

  memset_0(&v30, 0, 0x1F8uLL);
  v6 = 0;
  if ( !(unsigned int)xxxSetNCFonts(a1, a2) )
    return 0LL;
  if ( !a2 )
  {
    v30 = 504;
    if ( a3 >= 0 )
      TWIPSMetricById = a3;
    else
      TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u, -15);
    v32 = GetTWIPSMetricById(a1, 0x98u, -240);
    v33 = GetTWIPSMetricById(a1, 0x99u, -240);
    v34 = GetTWIPSMetricById(a1, 0x89u, -270);
    v35 = GetTWIPSMetricById(a1, 0x8Au, -270);
    v36 = GetTWIPSMetricById(a1, 0x8Cu, -195);
    v37 = GetTWIPSMetricById(a1, 0x8Du, -195);
    v38 = GetTWIPSMetricById(a1, 0x8Fu, -270);
    v39 = GetTWIPSMetricById(a1, 0x90u, -270);
    v40 = GetTWIPSMetricById(a1, 0x9Eu, 0);
    a2 = (struct tagNONCLIENTMETRICSW *)&v30;
  }
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 > 1 )
  {
    v8 = 50;
    if ( v7 >= 50 )
      goto LABEL_9;
  }
  else
  {
    v7 = 1;
  }
  v8 = v7;
LABEL_9:
  *((_DWORD *)a2 + 1) = v8;
  v9 = 8;
  v10 = *((_DWORD *)a2 + 125);
  v11 = 100;
  if ( v10 <= 0 )
    v10 = 0;
  if ( v10 < 100 )
    v11 = v10;
  v12 = 8;
  *((_DWORD *)a2 + 125) = v11;
  if ( *((int *)a2 + 2) > 8 )
    v12 = *((_DWORD *)a2 + 2);
  v13 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 2) = v12;
  v14 = 8;
  if ( v13 > 8 )
    v14 = v13;
  v15 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v14;
  v16 = 8LL;
  if ( v15 > 8 )
    v16 = (unsigned int)v15;
  *((_DWORD *)a2 + 4) = v16;
  v17 = *(_DWORD *)(GetSessionDpiServerInfo(v16) + 20);
  v18 = *((_DWORD *)a2 + 5);
  v19 = (unsigned int)(v17 + 2);
  if ( v18 <= (int)v19 )
    v18 = *(_DWORD *)(GetSessionDpiServerInfo(v19) + 20) + 2;
  *((_DWORD *)a2 + 5) = v18;
  SessionDpiMetrics = GetSessionDpiMetrics(v19);
  v21 = 8;
  v22 = *((_DWORD *)a2 + 55);
  v23 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v21 = *((_DWORD *)a2 + 29);
  v24 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v21;
  v25 = *(_DWORD *)(SessionDpiMetrics + 44);
  v26 = *((_DWORD *)a2 + 54);
  v27 = v25 + 2;
  if ( v24 <= v27 )
    v24 = v27;
  *((_DWORD *)a2 + 30) = v24;
  if ( v26 > 8 )
    v9 = v26;
  *((_DWORD *)a2 + 54) = v9;
  if ( v22 <= *(_DWORD *)(v23 + 28) )
    v22 = *(_DWORD *)(v23 + 28);
  *((_DWORD *)a2 + 55) = v22;
  SetNCMetrics(a2);
  LOBYTE(v6) = (unsigned int)CreateBitmapStrip(v28) != 0;
  return v6;
}
