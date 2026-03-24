/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0059B6C
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C00597D0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0059AE8 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0059D60 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C0059D98 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C005E1E4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  unsigned int v3; // edx
  DirectComposition::CEvent *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edx
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD **v15; // rbx
  _QWORD *v16; // rcx
  _QWORD **v17; // rsi
  _QWORD *v18; // rcx
  _QWORD **v19; // rsi
  _QWORD *v20; // rcx
  _QWORD **v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax

  v1 = *((_QWORD *)this + 27) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 27);
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4, v3);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      Win32FreePool((__int64)v5);
      *((_QWORD *)this + 23) = v6;
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)this + 22) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 75);
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    Win32FreePool(*((_QWORD *)this + 46));
  }
  v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10, v8);
  if ( *((_QWORD *)this + 91) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 85));
    *((_QWORD *)this + 91) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 90);
  if ( v11 )
  {
    MmUnmapViewInSessionSpace(v11);
    *((_QWORD *)this + 90) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 88);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 88) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 85);
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    *((_QWORD *)this + 85) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 77);
  if ( v14 )
    ObfDereferenceObject(v14);
  v15 = (_QWORD **)((char *)this + 528);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v16[1] != v15 || (v26 = (_QWORD *)*v16, *(_QWORD **)(*v16 + 8LL) != v16) )
LABEL_49:
      __fastfail(3u);
    *v15 = v26;
    v26[1] = v15;
    Win32FreePool((__int64)v16);
  }
  v17 = (_QWORD **)((char *)this + 544);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v18[1] != v17 )
      goto LABEL_49;
    v27 = (_QWORD *)*v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 )
      goto LABEL_49;
    *v17 = v27;
    v27[1] = v17;
    Win32FreePool((__int64)v18);
  }
  v19 = (_QWORD **)((char *)this + 560);
  while ( 1 )
  {
    v20 = *v19;
    if ( *v19 == v19 )
      break;
    if ( (_QWORD **)v20[1] != v19 )
      goto LABEL_49;
    v28 = (_QWORD *)*v20;
    if ( *(_QWORD **)(*v20 + 8LL) != v20 )
      goto LABEL_49;
    *v19 = v28;
    v28[1] = v19;
    Win32FreePool((__int64)v20);
  }
  v21 = (_QWORD **)((char *)this + 576);
  while ( 1 )
  {
    v22 = *v21;
    if ( *v21 == v21 )
      break;
    if ( (_QWORD **)v22[1] != v21 )
      goto LABEL_49;
    v29 = (_QWORD *)*v22;
    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
      goto LABEL_49;
    *v21 = v29;
    v29[1] = v21;
    Win32FreePool((__int64)v22);
  }
  v23 = *((_QWORD *)this + 59);
  if ( v23 )
    Win32FreePool(v23);
  v24 = *((_QWORD *)this + 14);
  if ( v24 )
    Win32FreePool(v24);
  v25 = *((_QWORD *)this + 7);
  if ( v25 )
    Win32FreePool(v25);
  DirectComposition::CChannel::~CChannel(this);
}
