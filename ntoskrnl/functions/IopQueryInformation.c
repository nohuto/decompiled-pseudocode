__int64 __fastcall IopQueryInformation(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  void *v8; // r14
  __int64 result; // rax
  int Open; // eax
  unsigned int v11; // edi
  bool v12; // zf
  _BYTE *v13; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryOpen)(_QWORD, _QWORD, _QWORD); // r12
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v16 = 0;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    v13 = a5;
    *a5 = 0;
    v11 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(a2->DriverObject) )
            v8 = (void *)VfFastIoSnapState();
          *v13 = FastIoQueryOpen(a3, *(_QWORD *)(a1 + 104), a2);
          if ( v8 )
            VfFastIoCheckState(v8);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *v13 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
            {
              **(_QWORD **)(a1 + 96) = **(_QWORD **)(a1 + 104);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL);
              *(_DWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
            }
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v11;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v16);
  if ( (int)result < 0 )
    return result;
  if ( (v16 & 4) == 0 )
  {
    *a5 = 0;
    return 0LL;
  }
  --*(_BYTE *)(a3 + 67);
  *(_QWORD *)(a3 + 184) -= 72LL;
  Open = FsRtlQueryOpen(a2, *(_DWORD *)(a1 + 200));
  v11 = Open;
  ++*(_BYTE *)(a3 + 67);
  *(_QWORD *)(a3 + 184) += 72LL;
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
  if ( !FeatureDeveloperVolume )
  {
    if ( Open >= 0 )
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a5 = 1;
      return v11;
    }
    v12 = Open == -1071906812;
    goto LABEL_13;
  }
  if ( Open < 0 )
  {
    if ( Open == -1071906812 )
      goto LABEL_14;
    v12 = Open == -1073741822;
LABEL_13:
    if ( !v12 )
      return v11;
LABEL_14:
    v11 = 0;
    *a5 = 0;
    return v11;
  }
  *(_DWORD *)(a1 + 32) = -1096154543;
  *a5 = 1;
  return v11;
}
