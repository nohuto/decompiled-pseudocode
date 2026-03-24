/*
 * XREFs of NtUpdateInputSinkTransforms @ 0x1C0002160
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00022F0 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C00478C0 (UserIsCurrentProcessDwm.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0082B80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1C01FB02C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_1C01FB02C.c)
 */

__int64 __fastcall NtUpdateInputSinkTransforms(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 i; // rdi
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int64 v11; // r12
  PVOID v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-E0h] BYREF
  int v20; // [rsp+C0h] [rbp-D8h] BYREF
  int v21; // [rsp+C4h] [rbp-D4h] BYREF
  int v22; // [rsp+C8h] [rbp-D0h] BYREF
  int v23; // [rsp+CCh] [rbp-CCh] BYREF
  int v24; // [rsp+D0h] [rbp-C8h] BYREF
  int v25; // [rsp+D4h] [rbp-C4h] BYREF
  int v26; // [rsp+D8h] [rbp-C0h] BYREF
  int v27; // [rsp+DCh] [rbp-BCh] BYREF
  int v28; // [rsp+E0h] [rbp-B8h] BYREF
  int v29; // [rsp+E4h] [rbp-B4h] BYREF
  int v30; // [rsp+E8h] [rbp-B0h] BYREF
  int v31; // [rsp+ECh] [rbp-ACh] BYREF
  int v32; // [rsp+F0h] [rbp-A8h] BYREF
  int v33; // [rsp+F4h] [rbp-A4h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-A0h] BYREF
  _OWORD v35[6]; // [rsp+100h] [rbp-98h] BYREF

  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v4 = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v18 = i;
      if ( v4 < 0 || (unsigned int)i >= a2 )
        break;
      memset(&v35[1], 0, 0x50uLL);
      v6 = (_OWORD *)(a1 + 80 * i);
      if ( v6 + 5 < v6 || (unsigned __int64)(v6 + 5) > MmUserProbeAddress )
        v6 = (_OWORD *)MmUserProbeAddress;
      v7 = v6[1];
      v8 = v6[2];
      v9 = v6[3];
      v10 = v6[4];
      v35[1] = *v6;
      v35[2] = v7;
      v35[3] = v8;
      v35[4] = v9;
      v35[5] = v10;
      Object = 0LL;
      v11 = *(_QWORD *)&v35[1];
      v4 = CompositionInputObject::ResolveHandle(*(void **)&v35[1], 2u, 1, (struct CompositionInputObject **)&Object);
      if ( v4 >= 0 )
      {
        v12 = Object;
        CompositionInputObject::UpdateTransform(
          (CompositionInputObject *)Object,
          (const struct tagINPUT_TRANSFORM *)&v35[2]);
        if ( (unsigned int)dword_1C024BA90 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 4LL, v13, v14) )
          {
            v18 = HIDWORD(v35[5]);
            v20 = DWORD2(v35[5]);
            v21 = DWORD1(v35[5]);
            v22 = v35[5];
            v23 = HIDWORD(v35[4]);
            v24 = DWORD2(v35[4]);
            v25 = DWORD1(v35[4]);
            v26 = v35[4];
            v27 = HIDWORD(v35[3]);
            v28 = DWORD2(v35[3]);
            v29 = DWORD1(v35[3]);
            v30 = v35[3];
            v31 = HIDWORD(v35[2]);
            v32 = DWORD2(v35[2]);
            v33 = DWORD1(v35[2]);
            LODWORD(Object) = v35[2];
            v34 = v11;
            *(_QWORD *)&v35[0] = v12;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1C024BA90,
              (unsigned int)&unk_1C0221C3C,
              v16,
              v17,
              (__int64)v35,
              (__int64)&v34,
              (__int64)&Object,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31,
              (__int64)&v30,
              (__int64)&v29,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)&v24,
              (__int64)&v23,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v18);
          }
        }
        ObfDereferenceObject(v12);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v4;
}
