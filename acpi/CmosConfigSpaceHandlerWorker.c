__int64 __fastcall CmosConfigSpaceHandlerWorker(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi

  v5 = 259;
  if ( *(_DWORD *)a4 )
  {
    if ( *(_DWORD *)a4 == 1 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiWriteCmosRoutine)(
        (unsigned int)CmosDeviceType,
        *((unsigned int *)a4 + 4),
        a4[3],
        *((unsigned int *)a4 + 5));
    else
      v5 = -1073741822;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))AcpiReadCmosRoutine)(
      (unsigned int)CmosDeviceType,
      *((unsigned int *)a4 + 4),
      a4[3],
      *((unsigned int *)a4 + 5));
  }
  ((void (__fastcall *)(_QWORD))a4[5])(a4[6]);
  AMLIDereferenceHandleEx(a4[1]);
  AMLIDereferenceHandleEx(a4[7]);
  ExFreePoolWithTag(a4, 0);
  return v5;
}
