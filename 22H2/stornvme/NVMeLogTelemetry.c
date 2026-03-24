/*
 * XREFs of NVMeLogTelemetry @ 0x1C000F3E0
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000F6F0 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C001A52C (NVMeLogTelemetryWaitForCmdComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     memset @ 0x1C0008040 (memset.c)
 */

__int64 __fastcall NVMeLogTelemetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _BYTE *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13,
        _BYTE *a14,
        __int64 a15,
        _BYTE *a16,
        __int64 a17,
        _BYTE *a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        _BYTE *a22,
        __int64 a23,
        _BYTE *a24,
        __int64 a25)
{
  unsigned int v26; // ecx
  _BYTE *v27; // rax
  unsigned int v28; // ebx
  size_t v29; // r8
  unsigned int v30; // ecx
  _BYTE *v31; // rax
  size_t v32; // r8
  unsigned int v33; // ecx
  _BYTE *v34; // rax
  size_t v35; // r8
  unsigned int v36; // ecx
  _BYTE *v37; // rax
  size_t v38; // r8
  unsigned int v39; // ecx
  _BYTE *v40; // rax
  size_t v41; // r8
  unsigned int v42; // ecx
  _BYTE *v43; // rax
  size_t v44; // r8
  unsigned int v45; // ecx
  _BYTE *v46; // rax
  size_t v47; // r8
  unsigned int v48; // ecx
  _BYTE *v49; // rax
  size_t v50; // r8
  unsigned int v51; // eax
  _BYTE *v52; // rcx
  _QWORD v56[48]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v56, 0, sizeof(v56));
  v26 = 0;
  HIDWORD(v56[0]) = a4;
  LODWORD(v56[0]) = 1;
  v27 = Src;
  v28 = 32;
  do
  {
    if ( !*v27 )
      break;
    ++v26;
    ++v27;
  }
  while ( v26 < 0x20 );
  v29 = 32LL;
  if ( v26 < 0x20 )
    v29 = v26;
  memmove(&v56[1], Src, v29);
  v56[5] = 1LL;
  if ( a10 )
  {
    v30 = 0;
    v31 = a10;
    do
    {
      if ( !*v31 )
        break;
      ++v30;
      ++v31;
    }
    while ( v30 < 0x20 );
    v32 = 32LL;
    if ( v30 < 0x20 )
      v32 = v30;
    memmove(&v56[8], a10, v32);
    v56[12] = a11;
  }
  if ( a12 )
  {
    v33 = 0;
    v34 = a12;
    do
    {
      if ( !*v34 )
        break;
      ++v33;
      ++v34;
    }
    while ( v33 < 0x20 );
    v35 = 32LL;
    if ( v33 < 0x20 )
      v35 = v33;
    memmove(&v56[13], a12, v35);
    v56[17] = a13;
  }
  if ( a14 )
  {
    v36 = 0;
    v37 = a14;
    do
    {
      if ( !*v37 )
        break;
      ++v36;
      ++v37;
    }
    while ( v36 < 0x20 );
    v38 = 32LL;
    if ( v36 < 0x20 )
      v38 = v36;
    memmove(&v56[18], a14, v38);
    v56[22] = a15;
  }
  if ( a16 )
  {
    v39 = 0;
    v40 = a16;
    do
    {
      if ( !*v40 )
        break;
      ++v39;
      ++v40;
    }
    while ( v39 < 0x20 );
    v41 = 32LL;
    if ( v39 < 0x20 )
      v41 = v39;
    memmove(&v56[23], a16, v41);
    v56[27] = a17;
  }
  if ( a18 )
  {
    v42 = 0;
    v43 = a18;
    do
    {
      if ( !*v43 )
        break;
      ++v42;
      ++v43;
    }
    while ( v42 < 0x20 );
    v44 = 32LL;
    if ( v42 < 0x20 )
      v44 = v42;
    memmove(&v56[28], a18, v44);
    v56[32] = a19;
  }
  if ( a20 )
  {
    v45 = 0;
    v46 = a20;
    do
    {
      if ( !*v46 )
        break;
      ++v45;
      ++v46;
    }
    while ( v45 < 0x20 );
    v47 = 32LL;
    if ( v45 < 0x20 )
      v47 = v45;
    memmove(&v56[33], a20, v47);
    v56[37] = a21;
  }
  if ( a22 )
  {
    v48 = 0;
    v49 = a22;
    do
    {
      if ( !*v49 )
        break;
      ++v48;
      ++v49;
    }
    while ( v48 < 0x20 );
    v50 = 32LL;
    if ( v48 < 0x20 )
      v50 = v48;
    memmove(&v56[38], a22, v50);
    v56[42] = a23;
  }
  if ( a24 )
  {
    v51 = 0;
    v52 = a24;
    do
    {
      if ( !*v52 )
        break;
      ++v51;
      ++v52;
    }
    while ( v51 < 0x20 );
    if ( v51 < 0x20 )
      v28 = v51;
    memmove(&v56[43], a24, v28);
    v56[47] = a25;
  }
  return StorPortExtendedFunction(96LL, a1, a2, v56);
}
