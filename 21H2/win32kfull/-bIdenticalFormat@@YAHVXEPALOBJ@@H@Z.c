/*
 * XREFs of ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C0109054
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C007F448 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIdenticalFormat(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  int v4; // r10d
  int v5; // r9d
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v11; // rax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 1;
  if ( (v2 & 2) != 0 )
  {
    v11 = *(int **)(a1 + 112);
    v5 = *v11;
    v4 = v11[1];
    v6 = v11[2];
  }
  else
  {
    v4 = 65280;
    if ( (v2 & 4) != 0 )
    {
      v5 = 255;
      v6 = 16711680;
    }
    else
    {
      v5 = 16711680;
      v6 = 255;
    }
  }
  v7 = 31744;
  if ( a2 != 4 )
    v7 = 16711680;
  if ( v5 != v7 )
    return 0;
  v8 = 992;
  if ( a2 != 4 )
    v8 = 65280;
  if ( v4 != v8 )
    return 0;
  v9 = 31;
  if ( a2 != 4 )
    v9 = 255;
  if ( v6 != v9 )
    return 0;
  return v3;
}
