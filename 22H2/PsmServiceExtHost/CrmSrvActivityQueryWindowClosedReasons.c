/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x18002E20C
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x18002E1F0 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmRegistrationFindActivity @ 0x18002F4B8 (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x18002FD24 (CrmActivityDereference.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v9; // r9
  __int64 Activity; // rbx
  SIZE_T v11; // r8
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  unsigned int i; // r8d
  __int64 v15; // r9
  unsigned int v16; // edi
  int v18; // eax
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh]
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  unsigned int *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int16 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+120h] [rbp+20h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]

  v4 = 0LL;
  v20 = 1001;
  if ( (unsigned int)dword_1800B3250 > 5 && tlgKeywordOn((__int64)&dword_1800B3250, 1LL) )
  {
    v47 = 0;
    v45 = v9;
    v46 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A25C7,
      0LL,
      0LL,
      3u,
      &v44);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v11 = 4LL * *(unsigned int *)(Activity + 88);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v20 = *(_DWORD *)(Activity + 56);
    Heap = RtlAllocateHeap(ProcessHeap, 0, v11);
    if ( Heap )
    {
      RtlAcquireSRWLockShared(Activity + 72);
      for ( i = 0; i < *(_DWORD *)(Activity + 96); ++i )
      {
        v15 = *(_QWORD *)(Activity + 104) + 56LL * i;
        if ( !*(_DWORD *)(v15 + 48) )
        {
          Heap[v4] = *(_DWORD *)(v15 + 32);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      RtlReleaseSRWLockShared(Activity + 72);
      *a3 = (__int64)Heap;
      v16 = 0;
      *a4 = v4;
    }
    else
    {
      v16 = -1073741801;
    }
  }
  else
  {
    v16 = -1073741811;
    RtlReleaseSRWLockShared(a2);
  }
  if ( Activity )
    CrmActivityDereference(Activity);
  if ( (unsigned int)dword_1800B3250 > 5 && tlgKeywordOn((__int64)&dword_1800B3250, 1LL) )
  {
    v26 = &Uuid;
    v21 = *(_DWORD *)(a2 + 24);
    v28 = &v21;
    v30 = a2 + 72;
    v18 = *(unsigned __int8 *)(a2 + 73);
    v19 = v4;
    v42 = 4 * (unsigned __int16)v4;
    v27 = 16LL;
    v31 = 4 * v18 + 8;
    v22 = v20;
    v33 = &v22;
    v35 = &v24;
    v37 = &v23;
    v39 = &v19;
    v41 = *a3;
    v29 = 4LL;
    v32 = 0;
    v34 = 4LL;
    v24 = a1;
    v36 = 8LL;
    v23 = v16;
    v38 = 4LL;
    v40 = 2LL;
    v43 = 0;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3250,
      (unsigned __int8 *)dword_1800A265E,
      0LL,
      0LL,
      0xAu,
      &v25);
  }
  return v16;
}
