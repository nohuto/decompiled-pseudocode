/*
 * XREFs of _McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56 @ 0x1000340F
 * Callers:
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 * Callees:
 *     _McGenEventWrite_EventWriteTransfer@20 @ 0x100033C0 (_McGenEventWrite_EventWriteTransfer@20.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 */

ULONG __fastcall McTemplateU0zzzzztzzzzdz_EventWriteTransfer(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        int a5,
        const unsigned __int16 *a6,
        const unsigned __int16 *a7,
        char a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        char a13,
        int a14)
{
  const wchar_t *v15; // edx
  unsigned int v16; // ecx
  const wchar_t *v17; // edx
  unsigned int v18; // ecx
  const wchar_t *v19; // edx
  unsigned int v20; // ecx
  const wchar_t *v21; // edx
  unsigned int v22; // ecx
  const wchar_t *v23; // edx
  int v24; // ecx
  struct _EVENT_DATA_DESCRIPTOR v26; // [esp+Ch] [ebp-D4h] BYREF
  const wchar_t *v27; // [esp+1Ch] [ebp-C4h]
  int v28; // [esp+20h] [ebp-C0h]
  unsigned int v29; // [esp+24h] [ebp-BCh]
  int v30; // [esp+28h] [ebp-B8h]
  const wchar_t *v31; // [esp+2Ch] [ebp-B4h]
  int v32; // [esp+30h] [ebp-B0h]
  unsigned int v33; // [esp+34h] [ebp-ACh]
  int v34; // [esp+38h] [ebp-A8h]
  const wchar_t *v35; // [esp+3Ch] [ebp-A4h]
  int v36; // [esp+40h] [ebp-A0h]
  int v37; // [esp+44h] [ebp-9Ch]
  int v38; // [esp+48h] [ebp-98h]
  const wchar_t *v39; // [esp+4Ch] [ebp-94h]
  int v40; // [esp+50h] [ebp-90h]
  unsigned int v41; // [esp+54h] [ebp-8Ch]
  int v42; // [esp+58h] [ebp-88h]
  const wchar_t *v43; // [esp+5Ch] [ebp-84h]
  int v44; // [esp+60h] [ebp-80h]
  unsigned int v45; // [esp+64h] [ebp-7Ch]
  int v46; // [esp+68h] [ebp-78h]
  char *v47; // [esp+6Ch] [ebp-74h]
  int v48; // [esp+70h] [ebp-70h]
  int v49; // [esp+74h] [ebp-6Ch]
  int v50; // [esp+78h] [ebp-68h]
  const wchar_t *v51; // [esp+7Ch] [ebp-64h]
  int v52; // [esp+80h] [ebp-60h]
  int v53; // [esp+84h] [ebp-5Ch]
  int v54; // [esp+88h] [ebp-58h]
  const wchar_t *v55; // [esp+8Ch] [ebp-54h]
  int v56; // [esp+90h] [ebp-50h]
  int v57; // [esp+94h] [ebp-4Ch]
  int v58; // [esp+98h] [ebp-48h]
  const wchar_t *v59; // [esp+9Ch] [ebp-44h]
  int v60; // [esp+A0h] [ebp-40h]
  int v61; // [esp+A4h] [ebp-3Ch]
  int v62; // [esp+A8h] [ebp-38h]
  const wchar_t *v63; // [esp+ACh] [ebp-34h]
  int v64; // [esp+B0h] [ebp-30h]
  int v65; // [esp+B4h] [ebp-2Ch]
  int v66; // [esp+B8h] [ebp-28h]
  char *v67; // [esp+BCh] [ebp-24h]
  int v68; // [esp+C0h] [ebp-20h]
  int v69; // [esp+C4h] [ebp-1Ch]
  int v70; // [esp+C8h] [ebp-18h]
  const wchar_t *v71; // [esp+CCh] [ebp-14h]
  int v72; // [esp+D0h] [ebp-10h]
  int v73; // [esp+D4h] [ebp-Ch]
  int v74; // [esp+D8h] [ebp-8h]

  v15 = a3;
  if ( a3 )
    v16 = 2 * wcslen(a3) + 2;
  else
    v16 = 10;
  if ( !a3 )
    v15 = L"NULL";
  v27 = v15;
  v17 = a4;
  v28 = 0;
  v29 = v16;
  v30 = 0;
  if ( a4 )
    v18 = 2 * wcslen(a4) + 2;
  else
    v18 = 10;
  if ( !a4 )
    v17 = L"NULL";
  v31 = v17;
  v19 = a6;
  v32 = 0;
  v33 = v18;
  v34 = 0;
  v35 = L"NULL";
  v36 = 0;
  v37 = 10;
  v38 = 0;
  if ( a6 )
    v20 = 2 * wcslen(a6) + 2;
  else
    v20 = 10;
  if ( !a6 )
    v19 = L"NULL";
  v39 = v19;
  v21 = a7;
  v40 = 0;
  v41 = v20;
  v42 = 0;
  if ( a7 )
    v22 = 2 * wcslen(a7) + 2;
  else
    v22 = 10;
  if ( !a7 )
    v21 = L"NULL";
  v43 = v21;
  v23 = a9;
  v44 = 0;
  v45 = v22;
  v46 = 0;
  v47 = &a8;
  v48 = 0;
  v49 = 4;
  v50 = 0;
  if ( a9 )
    v24 = 2 * wcslen(a9) + 2;
  else
    v24 = 10;
  if ( !a9 )
    v23 = L"NULL";
  v55 = L"NULL";
  v59 = L"NULL";
  v63 = L"NULL";
  v67 = &a13;
  v51 = v23;
  v52 = 0;
  v53 = v24;
  v54 = 0;
  v56 = 0;
  v57 = 10;
  v58 = 0;
  v60 = 0;
  v61 = 10;
  v62 = 0;
  v64 = 0;
  v65 = 10;
  v66 = 0;
  v68 = 0;
  v69 = 4;
  v70 = 0;
  v71 = L"DiagnosticData";
  v72 = 0;
  v73 = 30;
  v74 = 0;
  return McGenEventWrite_EventWriteTransfer(v24, a2, v24, v24, &v26);
}
