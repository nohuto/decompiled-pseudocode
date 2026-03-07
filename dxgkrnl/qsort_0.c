// attributes: thunk
void __cdecl qsort_0(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  qsort(Base, NumOfElements, SizeOfElements, PtFuncCompare);
}
