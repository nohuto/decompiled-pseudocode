void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
