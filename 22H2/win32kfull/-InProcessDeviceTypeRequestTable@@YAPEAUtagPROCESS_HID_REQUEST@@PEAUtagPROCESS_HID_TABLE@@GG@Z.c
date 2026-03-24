/*
 * XREFs of ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C0107F10
 * Callers:
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0107C90 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C0108720 (PostDeviceNotification.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01D48A4 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall InProcessDeviceTypeRequestTable(
        struct tagPROCESS_HID_TABLE *a1,
        __int16 a2,
        __int16 a3)
{
  struct tagPROCESS_HID_REQUEST *v3; // r9
  struct tagPROCESS_HID_REQUEST *v5; // r10
  struct tagPROCESS_HID_REQUEST *result; // rax
  __int64 v9; // rcx
  struct tagPROCESS_HID_REQUEST **v10; // rdx
  __int64 v11; // rcx
  struct tagPROCESS_HID_REQUEST *v12; // rcx
  __int64 v13; // rdx
  struct tagPROCESS_HID_REQUEST **v14; // r8
  struct tagPROCESS_HID_REQUEST *v15; // rdx
  char *v16; // rdx
  struct tagPROCESS_HID_TABLE *v17; // r8
  struct tagPROCESS_HID_TABLE *v18; // rcx
  struct tagPROCESS_HID_TABLE *v19; // rax
  struct tagPROCESS_HID_TABLE **v20; // r8
  __int64 v21; // rax

  v3 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 16);
  v5 = (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a1 + 2);
  result = v5;
  if ( v5 == (struct tagPROCESS_HID_TABLE *)((char *)a1 + 16) )
  {
LABEL_5:
    result = 0LL;
  }
  else
  {
    while ( *((_WORD *)result + 8) != a2 || *((_WORD *)result + 9) != a3 )
    {
      result = *(struct tagPROCESS_HID_REQUEST **)result;
      if ( result == v3 )
        goto LABEL_5;
    }
  }
  if ( result )
  {
    if ( v5 == result )
      return result;
    v9 = *(_QWORD *)result;
    if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) == result )
    {
      v10 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
      if ( *v10 == result )
      {
        *v10 = (struct tagPROCESS_HID_REQUEST *)v9;
        *(_QWORD *)(v9 + 8) = v10;
        v11 = *(_QWORD *)v3;
        if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)v3 + 8LL) == v3 )
        {
          *(_QWORD *)result = v11;
          *((_QWORD *)result + 1) = v3;
          *(_QWORD *)(v11 + 8) = result;
          *(_QWORD *)v3 = result;
          return result;
        }
      }
    }
LABEL_20:
    __fastfail(3u);
  }
  v12 = (struct tagPROCESS_HID_TABLE *)((char *)a1 + 32);
  result = *(struct tagPROCESS_HID_REQUEST **)v12;
  if ( *(struct tagPROCESS_HID_REQUEST **)v12 == v12 )
  {
LABEL_14:
    result = 0LL;
  }
  else
  {
    while ( *((_WORD *)result + 8) != a2 )
    {
      result = *(struct tagPROCESS_HID_REQUEST **)result;
      if ( result == v12 )
        goto LABEL_14;
    }
  }
  if ( !result )
    return 0LL;
  if ( *(struct tagPROCESS_HID_REQUEST **)v12 != result )
  {
    v13 = *(_QWORD *)result;
    if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)result + 8LL) != result )
      goto LABEL_20;
    v14 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)result + 1);
    if ( *v14 != result )
      goto LABEL_20;
    *v14 = (struct tagPROCESS_HID_REQUEST *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = *(struct tagPROCESS_HID_REQUEST **)v12;
    if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_20;
    *(_QWORD *)result = v15;
    *((_QWORD *)result + 1) = v12;
    *((_QWORD *)v15 + 1) = result;
    *(_QWORD *)v12 = result;
  }
  v16 = (char *)a1 + 48;
  v17 = (struct tagPROCESS_HID_TABLE *)*((_QWORD *)a1 + 6);
  v18 = v17;
  if ( v17 == (struct tagPROCESS_HID_TABLE *)((char *)a1 + 48) )
  {
LABEL_30:
    v18 = 0LL;
  }
  else
  {
    while ( *((_WORD *)v18 + 8) != a2 || *((_WORD *)v18 + 9) != a3 )
    {
      v18 = *(struct tagPROCESS_HID_TABLE **)v18;
      if ( v18 == (struct tagPROCESS_HID_TABLE *)v16 )
        goto LABEL_30;
    }
  }
  if ( v18 )
  {
    if ( v17 != v18 )
    {
      v19 = *(struct tagPROCESS_HID_TABLE **)v18;
      if ( *(struct tagPROCESS_HID_TABLE **)(*(_QWORD *)v18 + 8LL) != v18 )
        goto LABEL_20;
      v20 = (struct tagPROCESS_HID_TABLE **)*((_QWORD *)v18 + 1);
      if ( *v20 != v18 )
        goto LABEL_20;
      *v20 = v19;
      *((_QWORD *)v19 + 1) = v20;
      v21 = *(_QWORD *)v16;
      if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
        goto LABEL_20;
      *(_QWORD *)v18 = v21;
      *((_QWORD *)v18 + 1) = v16;
      *(_QWORD *)(v21 + 8) = v18;
      *(_QWORD *)v16 = v18;
    }
    return 0LL;
  }
  return result;
}
