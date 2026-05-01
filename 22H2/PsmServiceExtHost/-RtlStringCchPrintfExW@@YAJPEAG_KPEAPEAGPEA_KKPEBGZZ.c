/*
 * XREFs of ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180083DE0
 * Callers:
 *     ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x180083AF8 (-HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_.c)
 * Callees:
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     RtlStringExHandleOtherFlagsW @ 0x180083FA8 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW @ 0x180084068 (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCchPrintfExW(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const unsigned __int16 *a6,
        ...)
{
  int v9; // ebx
  unsigned __int16 *v10; // r13
  unsigned __int64 v11; // r14
  const unsigned __int16 *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 *v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v16 = a1;
    v10 = a1;
    v17[0] = a2;
    v11 = a2;
    if ( (a5 & 0x100) != 0 )
    {
      v12 = (const unsigned __int16 *)&unk_180095550;
      if ( a6 )
        v12 = a6;
    }
    else
    {
      v12 = a6;
    }
    v9 = 0;
    if ( (a5 & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( a2 )
        *a1 = 0;
    }
    else if ( a2 )
    {
      v17[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(a1, a2, v17);
      v14 = v17[0];
      v9 = v13;
      v11 = a2 - v17[0];
      v17[0] = a2 - v17[0];
      v10 = &a1[v14];
      v16 = v10;
      if ( v13 >= 0 )
      {
        if ( (a5 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset_0(v10 + 1, (unsigned __int8)a5, 2 * v11 - 2);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( a3 )
          *a3 = v10;
        if ( a4 )
          *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = a1 != 0LL ? -2147483643 : -1073741811;
    }
    if ( (a5 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW(a1, 2 * a2, a3, &v16, v17, a5);
      v10 = v16;
      v11 = v17[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_22;
  }
  return (unsigned int)v9;
}
