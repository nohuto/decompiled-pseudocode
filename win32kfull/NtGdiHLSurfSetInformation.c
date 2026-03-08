/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C001E5D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmOpenCompositorRef @ 0x1C001E854 (GreSfmOpenCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C001E978 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmCloseCompositorRef @ 0x1C001EC94 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C001F308 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026A4C8 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026A5FC (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C02B0804 (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, _QWORD *a3, unsigned int a4)
{
  NTSTATUS v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rcx
  NTSTATUS updated; // eax
  unsigned int v12; // edi
  int HDEV; // eax
  int v15; // edx
  HDEV v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG v19; // eax
  int v20[6]; // [rsp+38h] [rbp-40h] BYREF

  v5 = -1073741811;
  memset(v20, 0, sizeof(v20));
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    goto LABEL_58;
  }
  switch ( a2 )
  {
    case 1:
      if ( !a3 )
        goto LABEL_47;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      break;
    case 2:
      if ( !a3 )
        goto LABEL_47;
      if ( a4 < 8 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_QWORD *)MmUserProbeAddress;
      *(_QWORD *)v20 = *a3;
      goto LABEL_41;
    case 5:
      if ( !a3 )
        goto LABEL_47;
      if ( a4 < 0x18 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_QWORD *)MmUserProbeAddress;
      *(_OWORD *)v20 = *(_OWORD *)a3;
      *(_QWORD *)&v20[4] = a3[2];
      goto LABEL_41;
    case 7:
      if ( a3 )
        goto LABEL_47;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      goto LABEL_41;
    case 8:
      if ( a3 )
        goto LABEL_47;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      goto LABEL_41;
    case 10:
      if ( !a3 )
        goto LABEL_47;
      if ( a4 < 4 )
      {
        v5 = -1073741306;
        goto LABEL_47;
      }
      break;
    default:
      v5 = -1073741821;
      goto LABEL_47;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_QWORD *)MmUserProbeAddress;
  v20[0] = *(_DWORD *)a3;
LABEL_41:
  v6 = a2 - 1;
  if ( !v6 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetPresentFlags(v18, a1, (unsigned int)v20[0]);
    goto LABEL_46;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    UserGetHDEV();
    updated = GreHLsurfSetUpdateId(v17, a1, *(_QWORD *)v20);
    goto LABEL_46;
  }
  v8 = v7 - 3;
  if ( !v8 )
  {
    if ( *(_OWORD *)&v20[2] == 0LL )
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v20[0]);
    }
    else
    {
      HDEV = UserGetHDEV();
      updated = GreSetRedirectionSurfaceSignaling(HDEV, (_DWORD)a1, v20[4], v20[2], v20[0]);
    }
    goto LABEL_46;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    UserGetHDEV();
    updated = GreSfmOpenCompositorRef(v10, a1);
LABEL_46:
    v5 = updated;
    goto LABEL_47;
  }
  v15 = v9 - 1;
  if ( !v15 )
  {
    v16 = (HDEV)UserGetHDEV();
    updated = GreSfmCloseCompositorRef(v16, a1);
    goto LABEL_46;
  }
  if ( v15 == 2 )
    GreSfmGenerateMoveData((unsigned int)v20[0]);
LABEL_47:
  if ( v5 >= 0 )
  {
    v12 = 1;
    goto LABEL_49;
  }
LABEL_58:
  v12 = 0;
LABEL_49:
  if ( !v12 )
  {
    v19 = RtlNtStatusToDosError(v5);
    EngSetLastError(v19);
  }
  return v12;
}
