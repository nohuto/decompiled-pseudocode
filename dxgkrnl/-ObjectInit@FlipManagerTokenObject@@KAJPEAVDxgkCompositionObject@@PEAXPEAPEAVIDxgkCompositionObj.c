/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C00760E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompositionTextures__private_IsEnabledDeviceUsage @ 0x1C0026E2C (Feature_CompositionTextures__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        _QWORD *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 result; // rax

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( a1 != (struct DxgkCompositionObject *)-32LL )
  {
    *((_QWORD *)a1 + 8) = 6LL;
    *(_QWORD *)v3 = &CFlipManagerToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CFlipManagerToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    *((_QWORD *)a1 + 14) = 0LL;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_QWORD *)a1 + 16) = 0LL;
    *((_BYTE *)a1 + 136) = 0;
    *((_BYTE *)a1 + 138) = 0;
  }
  *a3 = v3;
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 11) = *a2;
  v6 = a2[1];
  *a2 = 0LL;
  *((_QWORD *)a1 + 13) = v6;
  v7 = a2[3];
  a2[1] = 0LL;
  *((_QWORD *)a1 + 14) = v7;
  *((_QWORD *)a1 + 16) = a2[4];
  if ( (unsigned int)Feature_CompositionTextures__private_IsEnabledDeviceUsage() )
    *((_QWORD *)a1 + 15) = a2[6];
  *((_QWORD *)a1 + 12) = a2[5];
  v8 = *((_BYTE *)a2 + 16);
  a2[5] = 0LL;
  *((_BYTE *)a1 + 136) = v8;
  result = 0LL;
  *((_BYTE *)a1 + 138) = 1;
  return result;
}
