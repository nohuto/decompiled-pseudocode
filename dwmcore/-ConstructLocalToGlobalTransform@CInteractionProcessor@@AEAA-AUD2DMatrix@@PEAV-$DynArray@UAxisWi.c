int *__fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(__int64 *a1, int *a2, __int64 *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v10; // rbx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // [rsp+A8h] [rbp-80h] BYREF
  int v20; // [rsp+ACh] [rbp-7Ch] BYREF
  int v21; // [rsp+B0h] [rbp-78h] BYREF
  int v22; // [rsp+B4h] [rbp-74h] BYREF
  int v23; // [rsp+B8h] [rbp-70h] BYREF
  int v24; // [rsp+BCh] [rbp-6Ch] BYREF
  int v25; // [rsp+C0h] [rbp-68h] BYREF
  int v26; // [rsp+C4h] [rbp-64h] BYREF
  int v27; // [rsp+C8h] [rbp-60h] BYREF
  int v28; // [rsp+CCh] [rbp-5Ch] BYREF
  __int64 *v29; // [rsp+D0h] [rbp-58h] BYREF
  int v30; // [rsp+D8h] [rbp-50h]
  __int64 v31; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-30h] BYREF
  _OWORD v35[2]; // [rsp+100h] [rbp-28h] BYREF
  int v36; // [rsp+120h] [rbp-8h]

  v3 = *((_DWORD *)a3 + 6);
  v4 = 0LL;
  v36 = 0;
  v5 = v3 - 1;
  v6 = v5;
  memset(v35, 0, sizeof(v35));
  if ( v5 >= 0 )
  {
    v10 = 16LL * v5;
    do
    {
      if ( (unsigned int)v4 >= 3 )
        break;
      v11 = *a3;
      v12 = *(_DWORD *)(v10 + *a3 + 8);
      v29 = *(__int64 **)(v10 + *a3);
      v30 = v12;
      if ( anonymous_namespace_::CanAddThisColumnVectorToMatrix((float *)v35, v4, (__int64)&v29) )
      {
        v13 = 3 * v4;
        v14 = *(_DWORD *)(v10 + v11 + 8);
        v4 = (unsigned int)(v4 + 1);
        *(_QWORD *)((char *)v35 + 4 * v13) = *(_QWORD *)(v10 + v11);
        *((_DWORD *)v35 + v13 + 2) = v14;
      }
      v10 -= 16LL;
      --v6;
    }
    while ( v6 >= 0 );
  }
  anonymous_namespace_::ConvertVectorArrayToMatrix(a2, v35);
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v19 = a2[10];
    v20 = a2[9];
    v21 = a2[8];
    v22 = a2[6];
    v23 = a2[5];
    v24 = a2[4];
    v25 = a2[2];
    v26 = a2[1];
    v27 = *a2;
    v28 = *((_DWORD *)a1 + 197);
    v31 = a1[60];
    v32 = a1[40];
    v33 = a1[20];
    v34 = *a1;
    v29 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      byte_18037B7B4,
      v16,
      v17,
      (__int64)&v29,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  return a2;
}
