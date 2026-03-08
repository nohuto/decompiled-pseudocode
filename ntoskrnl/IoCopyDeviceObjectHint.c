/*
 * XREFs of IoCopyDeviceObjectHint @ 0x140944190
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoCopyDeviceObjectHint(__int64 a1, __int64 a2)
{
  int v3; // edx
  _QWORD *v4; // r8
  unsigned int v6; // edx
  _QWORD *v7; // rbx
  __int64 v8; // r8
  unsigned int SetSpecificExtension; // r10d
  __int64 v10; // r11
  __int64 v11; // [rsp+28h] [rbp-10h]
  _QWORD *FileObjectExtension; // [rsp+50h] [rbp+18h] BYREF

  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a2, 1, 0LL);
  if ( FileObjectExtension )
    return 3221225473LL;
  v7 = (_QWORD *)IopGetFileObjectExtension(a1, v3, v4);
  if ( v7 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension(v10, v6, 0x20u, v6, &FileObjectExtension, (_QWORD *)(v8 & v11));
    if ( !SetSpecificExtension )
      *FileObjectExtension = *v7;
  }
  return SetSpecificExtension;
}
