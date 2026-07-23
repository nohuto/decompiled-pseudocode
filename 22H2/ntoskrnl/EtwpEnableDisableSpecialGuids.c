/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x1407166EC
 * Callers:
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpEnableDisableUMGL @ 0x140934268 (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093D79C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x14093DBDC (EtwpLogFileNameRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        __int64 *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  char v8; // r10
  unsigned int v10; // r12d
  int v11; // r9d
  unsigned int v14; // r11d
  __int64 v15; // rdx
  char v16; // cl
  char v17; // bp
  unsigned int v18; // esi
  GUID **v19; // r15
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v24; // r8
  unsigned int v25; // ecx
  __int64 v26; // r9

  v8 = 1;
  v10 = a3;
  v11 = a5;
  v14 = -1073741275;
  v15 = 2LL;
  *a8 = 1;
  if ( a4 != 2 )
  {
    v16 = 0;
    if ( a4 == 1 )
    {
      v17 = 1;
    }
    else
    {
      if ( a4 )
        goto LABEL_12;
      v17 = 0;
    }
    v18 = 0;
    v19 = &EtwpUmglProviders;
    do
    {
      v20 = *a2;
      v21 = *(_QWORD *)&(*v19)->Data1 - *a2;
      if ( !v21 )
        v21 = *(_QWORD *)(*v19)->Data4 - a2[1];
      if ( !v21 )
      {
        LOBYTE(v15) = v17;
        return EtwpEnableDisableUMGL(
                 a1,
                 v15,
                 (unsigned __int16)v10,
                 a5,
                 *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * v18] + 8));
      }
      ++v18;
      v19 += 2;
    }
    while ( v18 < 0xA );
    v22 = *(_QWORD *)&KernelRundownGuid.Data1 - v20;
    if ( *(_QWORD *)&KernelRundownGuid.Data1 == v20 )
      v22 = *(_QWORD *)KernelRundownGuid.Data4 - a2[1];
    if ( v22 )
      goto LABEL_12;
    if ( v17 == 1 )
    {
      v26 = (unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v15 = *(unsigned __int8 *)(a1 + 4208);
      }
      else
      {
        v26 = (unsigned int)(a5 - 2);
        if ( a5 == 2 )
        {
          v15 = *(unsigned __int8 *)(a1 + 4208);
          goto LABEL_33;
        }
        v26 = (unsigned int)(a5 - 4);
        if ( a5 != 4 )
        {
          v26 = (unsigned int)(a5 - 8);
          if ( a5 == 16 )
            return (unsigned int)EtwpLogFileNameRundown(a1, v10);
LABEL_33:
          LOBYTE(v26) = v16;
          return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v15, v10, v26);
        }
      }
      v16 = 1;
      goto LABEL_33;
    }
    return 0;
  }
  v24 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a2;
  if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a2 )
    v24 = *(_QWORD *)SystemTraceControlGuid.Data4 - a2[1];
  v25 = 0;
  if ( v24 || a1 != EtwpHostSiloState )
  {
LABEL_12:
    *a8 = 0;
    return v14;
  }
  if ( a5 == 1 )
    goto LABEL_23;
  if ( a5 == 2 )
  {
    v8 = 0;
LABEL_23:
    LOBYTE(v11) = v8;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, v10, v11, a6, a7);
  }
  return v25;
}
