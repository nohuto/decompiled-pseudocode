NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  char v10; // dl
  char v11; // al
  struct _MDL *v12; // rdx
  char v14; // al

  v7 = 0;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    v14 = (char)FileObject;
    FileObject = (PFILE_OBJECT)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = 2 - ((v14 & 1) != 0LL);
  }
  v8 = (unsigned __int8)MemoryDescriptorList & 1;
  v9 = (unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL;
  if ( ((unsigned __int8)MemoryDescriptorList & 1) == 0 )
    v9 = (unsigned __int64)MemoryDescriptorList;
  v10 = v7 | 4;
  if ( !v8 )
    v10 = v7;
  v11 = v10 | 8;
  if ( (v9 & 2) == 0 )
    v11 = v10;
  v12 = (struct _MDL *)(v9 & 0xFFFFFFFFFFFFFFFDuLL);
  if ( (v9 & 2) == 0 )
    v12 = (struct _MDL *)v9;
  return IoPageReadEx(FileObject, v12, StartingOffset, Event, IoStatusBlock, v11, 0LL);
}
